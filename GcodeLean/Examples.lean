import GcodeLean.AST
import GcodeLean.Step

namespace GcodeLean

-- Example 1: Correct program - should succeed
def correctProgram : List GCode :=
  [ .G90,                                    -- Set absolute mode
    .G0 (some 10) (some 5) none none,       -- Rapid move (spindle off)
    .G91,                                    -- Set relative mode
    .G0 none none (some 2) none,            -- Rapid move in Z
    .M3,                                     -- Turn spindle on
    .G1 (some 15) (some 10) none none,      -- Linear move with spindle on
    .M5 ]                                    -- Turn spindle off

def testCorrect : IO Unit := do
  let result := runProgram {} correctProgram
  match result with
  | Except.ok finalState =>
      IO.println s!"Correct program succeeded!"
      IO.println s!"Final position: X={finalState.x}, Y={finalState.y}, Z={finalState.z}"
      IO.println s!"Spindle: {if finalState.spindleOn then "ON" else "OFF"}"
  | Except.error err =>
      IO.println s!"Correct program failed (unexpected): {repr err}"

-- Example 2: Out of bounds error
def outOfBoundsProgram : List GCode :=
  [ .G90,                                    -- Set absolute mode
    .G0 (some 250) (some 5) none none ]     -- Try to move beyond xMax (200)

def testOutOfBounds : IO Unit := do
  let result := runProgram {} outOfBoundsProgram
  match result with
  | Except.ok _ =>
      IO.println s!"Out of bounds program succeeded (unexpected)"
  | Except.error err =>
      match err with
      | StepError.OutOfBounds axis value min max =>
          IO.println s!"Out of bounds error caught correctly!"
          IO.println s!"Axis {axis} value {value} is outside bounds [{min}, {max}]"
      | _ =>
          IO.println s!"Wrong error type: {repr err}"

-- Example 3: Spindle on during rapid move
def spindleOnRapidMoveProgram : List GCode :=
  [ .G90,                                    -- Set absolute mode
    .M3,                                     -- Turn spindle on
    .G0 (some 10) (some 5) none none ]      -- Try rapid move with spindle on

def testSpindleOnRapidMove : IO Unit := do
  let result := runProgram {} spindleOnRapidMoveProgram
  match result with
  | Except.ok _ =>
      IO.println s!"Spindle on rapid move program succeeded (unexpected)"
  | Except.error err =>
      match err with
      | StepError.SpindleOnWhenRapidMove =>
          IO.println s!"Spindle on rapid move error caught correctly!"
          IO.println s!"Cannot perform rapid move (G0) when spindle is on"
      | _ =>
          IO.println s!"Wrong error type: {repr err}"

-- Example 4: Spindle off during linear move
def spindleOffLinearMoveProgram : List GCode :=
  [ .G90,                                    -- Set absolute mode
    .M5,                                     -- Turn spindle off
    .G1 (some 10) (some 5) none none ]      -- Try linear move with spindle off

def testSpindleOffLinearMove : IO Unit := do
  let result := runProgram {} spindleOffLinearMoveProgram
  match result with
  | Except.ok _ =>
      IO.println s!"Spindle off linear move program succeeded (unexpected)"
  | Except.error err =>
      match err with
      | StepError.SpindleOffWhenLinearMove =>
          IO.println s!"Spindle off linear move error caught correctly!"
          IO.println s!"Cannot perform linear move (G1) when spindle is off"
      | _ =>
          IO.println s!"Wrong error type: {repr err}"

-- Run all tests
def runAllTests : IO Unit := do
  IO.println "=== Testing G-code Error Handling ==="
  IO.println ""
  IO.println "Test 1: Correct Program"
  IO.println "----------------------"
  testCorrect
  IO.println ""
  IO.println "Test 2: Out of Bounds"
  IO.println "---------------------"
  testOutOfBounds
  IO.println ""
  IO.println "Test 3: Spindle On During Rapid Move"
  IO.println "------------------------------------"
  testSpindleOnRapidMove
  IO.println ""
  IO.println "Test 4: Spindle Off During Linear Move"
  IO.println "------------------------------------"
  testSpindleOffLinearMove


#eval runAllTests

end GcodeLean
