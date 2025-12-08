import GcodeLean.AST
import GcodeLean.State
import GcodeLean.Step
import GcodeLean.Proofs.PhysicalInvariants
import GcodeLean.Proofs.ModalStateInvariant
import GcodeLean.Proofs.CoordsInvariants

namespace GcodeLean

--- The main soundness theorem: all invariants are preserved by successful step.
theorem step_soundness
    (st st' : ControllerState) (cmd : GCode) :
    step st cmd = Except.ok st' →
    coordsFinite st →
    physicalStateInvariant st →
    modalStateInvariant st →
    coordsFinite st' ∧ physicalStateInvariant st' ∧ modalStateInvariant st' := by
  intro h_step h_coords h_phys h_modal
  constructor
  · -- Prove coordsFinite st'
    exact step_preserves_invariant st cmd st' h_step h_coords
  · -- Prove physicalStateInvariant st' ∧ modalStateInvariant st'
    constructor
    · -- Prove physicalStateInvariant st'
      exact step_preserves_physicalStateInvariant st cmd st' h_step h_phys
    · -- Prove modalStateInvariant st'
      exact step_preserves_modalStateInvariant st st' cmd h_step h_modal

--- Whole-program soundness (folded interpreter).
theorem runProgram_soundness
    (prog : List GCode) (st st' : ControllerState) :
    runProgram st prog = Except.ok st' →
    coordsFinite st →
    physicalStateInvariant st →
    modalStateInvariant st →
    coordsFinite st' ∧ physicalStateInvariant st' ∧ modalStateInvariant st' := by
  intro h_run h_coords h_phys h_modal
  simp [runProgram] at h_run
  induction prog generalizing st with
  | nil =>
    -- Empty program: st' = st
    injection h_run with h_eq
    rw [←h_eq]
    exact ⟨h_coords, h_phys, h_modal⟩
  | cons cmd rest ih =>
    -- Non-empty program: step then continue
    cases h_first : step st cmd with
    | error e =>
      simp [h_first] at h_run
      contradiction
    | ok st_mid =>
      simp [h_first] at h_run
      -- Apply step_soundness to get invariants for st_mid
      have h_step_sound := step_soundness st st_mid cmd h_first h_coords h_phys h_modal
      rcases h_step_sound with ⟨h_coords_mid, h_phys_mid, h_modal_mid⟩
      -- Apply inductive hypothesis to the rest of the program
      exact ih st_mid h_run h_coords_mid h_phys_mid h_modal_mid

end GcodeLean
