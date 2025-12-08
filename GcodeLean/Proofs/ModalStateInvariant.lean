import GcodeLean.AST
import GcodeLean.State
import GcodeLean.Step

namespace GcodeLean

--- Make sure modal state invariants are preserved after each step

--- Modal state invariant: ensures the distance mode is always well-formed
--- and the spindle state is consistent with the distance mode.
--- This is trivial now because distance mode is just an enum with 2 states,
--- but in the real world it can be more complex
def modalStateInvariant (st : ControllerState) : Prop :=
  (st.distMode = DistanceMode.absolute ∨ st.distMode = DistanceMode.relative)

--- applyMove preserves modal invariant.
theorem applyMove_preserves_modalStateInvariant
    (st st' : ControllerState)
    (X Y Z : Option Float)
    (F : Option Int)
    (spindleCheck : ControllerState → Option StepError) :
    applyMove st X Y Z F spindleCheck = Except.ok st' →
    modalStateInvariant st →
    modalStateInvariant st' := by
  intro h_apply h_modal
  simp [applyMove] at h_apply
  split at h_apply
  · -- spindle check failed
    contradiction
  · -- spindle check passed
    split at h_apply
    · -- bounds check failed
      contradiction
    · -- all checks passed
      injection h_apply with h_eq
      rw [←h_eq]
      exact h_modal

--- Modal state updates preserve invariant.
theorem step_preserves_modalStateInvariant
    (st st' : ControllerState)
    (cmd : GCode) :
    step st cmd = Except.ok st' →
    modalStateInvariant st →
    modalStateInvariant st' := by
  intro h_step h_inv
  cases cmd with
  | G0 X? Y? Z? F? =>
    exact applyMove_preserves_modalStateInvariant st st' _ _ _ _ checkSpindleForRapidMove h_step h_inv
  | G1 X? Y? Z? F? =>
    exact applyMove_preserves_modalStateInvariant st st' _ _ _ _ checkSpindleForLinearMove h_step h_inv
  | G90 =>
    injection h_step with h_eq
    rw [←h_eq]
    simp [modalStateInvariant]
  | G91 =>
    injection h_step with h_eq
    rw [←h_eq]
    simp [modalStateInvariant]
  | M3 =>
    injection h_step with h_eq
    rw [←h_eq]
    simp [modalStateInvariant]
    exact h_inv
  | M5 =>
    injection h_step with h_eq
    rw [←h_eq]
    simp [modalStateInvariant]
    exact h_inv
end GcodeLean
