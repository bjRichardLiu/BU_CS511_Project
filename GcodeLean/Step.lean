import GcodeLean.AST
import GcodeLean.State

namespace GcodeLean

inductive StepError
  | OutOfBounds (axis : String) (value : Float) (min : Float) (max : Float)
  | SpindleOnWhenRapidMove
  | SpindleOffWhenLinearMove
  deriving Repr, BEq

def checkBounds
    (st : ControllerState)
    (x y z : Float) :
    Option StepError :=
  if x < st.bounds.xMin then
    some (.OutOfBounds "X" x st.bounds.xMin st.bounds.xMax)
  else if x > st.bounds.xMax then
    some (.OutOfBounds "X" x st.bounds.xMin st.bounds.xMax)
  else if y < st.bounds.yMin then
    some (.OutOfBounds "Y" y st.bounds.yMin st.bounds.yMax)
  else if y > st.bounds.yMax then
    some (.OutOfBounds "Y" y st.bounds.yMin st.bounds.yMax)
  else if z < st.bounds.zMin then
    some (.OutOfBounds "Z" z st.bounds.zMin st.bounds.zMax)
  else if z > st.bounds.zMax then
    some (.OutOfBounds "Z" z st.bounds.zMin st.bounds.zMax)
  else
    none

def checkSpindleForRapidMove
    (st : ControllerState) :
    Option StepError :=
  if st.spindleOn then
    some .SpindleOnWhenRapidMove
  else
    none

def checkSpindleForLinearMove
    (st : ControllerState) :
    Option StepError :=
  if not st.spindleOn then
    some .SpindleOffWhenLinearMove
  else
    none

-- Helper to compute target coordinates without applying them
def computeTarget
    (st : ControllerState)
    (X? Y? Z? : Option Float) :
    (Float × Float × Float) :=
  match st.distMode with
  | .absolute =>
      (X?.getD st.x, Y?.getD st.y, Z?.getD st.z)
  | .relative =>
      let dx := X?.getD 0.0
      let dy := Y?.getD 0.0
      let dz := Z?.getD 0.0
      (st.x + dx, st.y + dy, st.z + dz)

-- Apply move with all checks performed first
def applyMove
    (st : ControllerState)
    (X? Y? Z? : Option Float)
    (F? : Option Int)
    (spindleCheck : ControllerState → Option StepError) :
    Except StepError ControllerState :=
  -- First: Check spindle state
  match spindleCheck st with
  | some err => Except.error err
  | none =>
      -- Second: Compute target coordinates
      let (newX, newY, newZ) := computeTarget st X? Y? Z?
      -- Third: Check if target is within bounds
      match checkBounds st newX newY newZ with
      | some err => Except.error err
      | none =>
          -- All checks passed, apply the move
          Except.ok { st with
            x := newX,
            y := newY,
            z := newZ,
            feedRate := F?.getD st.feedRate }

def step
    (st : ControllerState)
    (cmd : GCode) :
    Except StepError ControllerState :=
  match cmd with
  | .G0 X? Y? Z? F? =>
      -- Rapid move: spindle must be off, then check bounds
      applyMove st X? Y? Z? F? checkSpindleForRapidMove
  | .G1 X? Y? Z? F? =>
      -- Linear move: spindle must be on, then check bounds
      applyMove st X? Y? Z? F? checkSpindleForLinearMove
  | .G90 => Except.ok { st with distMode := .absolute }
  | .G91 => Except.ok { st with distMode := .relative }
  | .M3  => Except.ok { st with spindleOn := true }
  | .M5  => Except.ok { st with spindleOn := false }

def runProgram (st : ControllerState) (prog : List GCode) : Except StepError ControllerState :=
  prog.foldlM step st

end GcodeLean
