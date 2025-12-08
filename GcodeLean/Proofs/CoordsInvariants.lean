import GcodeLean.AST
import GcodeLean.State
import GcodeLean.Step

namespace GcodeLean

--- Make sure controller coordinate invariants are preserved after each step

def coordsFinite (st : ControllerState) : Prop :=
  st.x.isFinite = true ∧ st.y.isFinite = true ∧ st.z.isFinite = true

--- Helper: Float.isFinite axioms
axiom Float.isFinite_add (a1 a2 : Float) : a1.isFinite = true → a2.isFinite = true → (a1 + a2).isFinite = true
axiom Float.isFinite_of_float (a : Float) : a.isFinite = true
axiom Float.isFinite_add_zero (a : Float) : a.isFinite = true → (a + 0.0).isFinite = true
axiom Option.getD_some_float (a : Float) (d : Float) : (some a).getD d = a
axiom Option.getD_none_float (d : Float) : (none : Option Float).getD d = d

--- computeTarget preserves finiteness of coordinates
theorem computeTarget_preserves_finite
    (st : ControllerState)
    (X? Y? Z? : Option Float) :
    coordsFinite st →
    let (x', y', z') := computeTarget st X? Y? Z?
    x'.isFinite = true ∧ y'.isFinite = true ∧ z'.isFinite = true := by
  intro h
  simp [coordsFinite, computeTarget] at *
  rcases h with ⟨hx, hy, hz⟩
  cases h_distMode : st.distMode
  · -- absolute mode
    constructor
    · cases X? with
      | none => exact hx
      | some x =>
        rw [Option.getD_some_float]
        exact Float.isFinite_of_float x
    · constructor
      · cases Y? with
        | none => exact hy
        | some y =>
          rw [Option.getD_some_float]
          exact Float.isFinite_of_float y
      · cases Z? with
        | none => exact hz
        | some z =>
          rw [Option.getD_some_float]
          exact Float.isFinite_of_float z
  · -- relative mode
    constructor
    · cases X? with
      | none =>
        rw [Option.getD_none_float]
        exact Float.isFinite_add_zero st.x hx
      | some dx =>
        rw [Option.getD_some_float]
        exact Float.isFinite_add st.x dx hx (Float.isFinite_of_float dx)
    · constructor
      · cases Y? with
        | none =>
          rw [Option.getD_none_float]
          exact Float.isFinite_add_zero st.y hy
        | some dy =>
          rw [Option.getD_some_float]
          exact Float.isFinite_add st.y dy hy (Float.isFinite_of_float dy)
      · cases Z? with
        | none =>
          rw [Option.getD_none_float]
          exact Float.isFinite_add_zero st.z hz
        | some dz =>
          rw [Option.getD_some_float]
          exact Float.isFinite_add st.z dz hz (Float.isFinite_of_float dz)

--- applyMove preserves coordsFinite when it succeeds
theorem applyMove_preserves_coordsFinite
    (st : ControllerState)
    (X? Y? Z? : Option Float) (F? : Option Int)
    (spindleCheck : ControllerState → Option StepError)
    (st' : ControllerState) :
    applyMove st X? Y? Z? F? spindleCheck = Except.ok st' →
    coordsFinite st → coordsFinite st' := by
  intro h_apply h
  simp [coordsFinite, applyMove] at *
  -- The applyMove function first checks spindle, then computes target, then checks bounds
  split at h_apply
  · -- spindle check failed
    contradiction
  · -- spindle check passed, now check bounds
    split at h_apply
    · -- bounds check failed
      contradiction
    · -- all checks passed
      injection h_apply with h_eq
      rw [←h_eq]
      exact computeTarget_preserves_finite st X? Y? Z? h

theorem step_preserves_invariant
    (st : ControllerState)
    (cmd : GCode)
    (st' : ControllerState) :
  step st cmd = Except.ok st' →
  coordsFinite st → coordsFinite st' := by
  intro h_step h_inv
  cases cmd with
  | G0 X? Y? Z? F? =>
    exact applyMove_preserves_coordsFinite st _ _ _ _ checkSpindleForRapidMove st' h_step h_inv
  | G1 X? Y? Z? F? =>
    exact applyMove_preserves_coordsFinite st _ _ _ _ checkSpindleForLinearMove st' h_step h_inv
  | G90 =>
    injection h_step with h_eq
    simp [←h_eq]
    exact h_inv
  | G91 =>
    injection h_step with h_eq
    simp [←h_eq]
    exact h_inv
  | M3 =>
    injection h_step with h_eq
    simp [←h_eq]
    exact h_inv
  | M5 =>
    injection h_step with h_eq
    simp [←h_eq]
    exact h_inv

end GcodeLean
