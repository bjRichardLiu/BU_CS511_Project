import GcodeLean.AST
import GcodeLean.State
import GcodeLean.Step

namespace GcodeLean

--- Spindle well-formed invariant
--- This is trivial since it's a boolean
--- but we include it for future more complex spindle conditions
def physicalStateInvariant (st : ControllerState) : Prop :=
  st.spindleOn = true ∨ st.spindleOn = false


theorem step_preserves_physicalStateInvariant
    (st : ControllerState)
    (cmd : GCode)
    (st' : ControllerState) :
  step st cmd = Except.ok st' →
  physicalStateInvariant st → physicalStateInvariant st' := by
  simp[physicalStateInvariant]


--- applyMove preserves physicalStateInvariant when it succeeds
-- theorem applyMove_preserves_physicalStateInvariant
--     (st : ControllerState)
--     (X? Y? Z? : Option Float) (F? : Option Int)
--     (spindleCheck : ControllerState → Option StepError)
--     (st' : ControllerState) :
--     applyMove st X? Y? Z? F? spindleCheck = Except.ok st' →
--     physicalStateInvariant st → physicalStateInvariant st' := by
--   intro h_apply h_phys
--   simp only [applyMove] at h_apply
--   split at h_apply
--   · -- spindle check failed
--     contradiction
--   · -- spindle check passed
--     split at h_apply
--     · -- bounds check failed
--       contradiction
--     · -- all checks passed
--       injection h_apply with h_eq
--       rw [←h_eq]
--       exact h_phys

-- theorem step_preserves_physicalStateInvariant
--     (st : ControllerState)
--     (cmd : GCode)
--     (st' : ControllerState) :
--   step st cmd = Except.ok st' →
--   physicalStateInvariant st → physicalStateInvariant st' := by
--   intro h_step h_inv
--   cases cmd with
--   | G0 X? Y? Z? F? =>
--     simp [physicalStateInvariant]
--     -- exact applyMove_preserves_physicalStateInvariant st _ _ _ _ checkSpindleForRapidMove st' h_step h_inv
--   | G1 X? Y? Z? F? =>
--     simp [physicalStateInvariant]
--     -- exact applyMove_preserves_physicalStateInvariant st _ _ _ _ checkSpindleForLinearMove st' h_step h_inv
--   | G90 =>
--     simp [physicalStateInvariant]
--   | G91 =>
--     simp [physicalStateInvariant]
--   | M3 =>
--     simp [physicalStateInvariant]
--   | M5 =>
--     simp [physicalStateInvariant]
end GcodeLean
