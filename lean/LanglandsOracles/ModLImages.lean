import LanglandsOracles.ImageModL

/-!
# ρ̄_ℓ for the 15 Cremona curves of prime level, ℓ = 5, 7, 11, 13

The instances of `ImageModL`: for each ℓ the field facts, the generation of GL₂(𝔽_ℓ) by S, the certified
class pairs and the per-curve arithmetic, all kernel-checked on the exported data (`Data`), then the
headlines `modℓ_images_full`.  The ℓ ≥ 11 checks lift the default heartbeat limit.
-/
namespace Oracles

namespace Mat2

theorem traceSq5 : ∀ a b c d : Fin 5, (a * a + b * c) + (c * b + d * d) = (a + d) * (a + d) - 2 * (a * d - b * c) := by trace_sq_tac
theorem traceSq7 : ∀ a b c d : Fin 7, (a * a + b * c) + (c * b + d * d) = (a + d) * (a + d) - 2 * (a * d - b * c) := by trace_sq_tac
theorem traceSq11 : ∀ a b c d : Fin 11, (a * a + b * c) + (c * b + d * d) = (a + d) * (a + d) - 2 * (a * d - b * c) := by trace_sq_tac

theorem traceSq13 : ∀ a b c d : Fin 13, (a * a + b * c) + (c * b + d * d) = (a + d) * (a + d) - 2 * (a * d - b * c) := by trace_sq_tac

theorem negFacts5 : NegFacts 5 := ⟨by decide, by decide, by decide, by decide⟩
theorem negFacts7 : NegFacts 7 := ⟨by decide, by decide, by decide, by decide⟩
theorem negFacts11 : NegFacts 11 := ⟨by decide, by decide, by decide, by decide⟩
theorem negFacts13 : NegFacts 13 := ⟨by decide, by decide, by decide, by decide⟩

theorem ff5 : FieldFacts 5 := FieldFacts.of traceSq5 negFacts5 (by decide +kernel)
theorem ff7 : FieldFacts 7 := FieldFacts.of traceSq7 negFacts7 (by decide +kernel)
set_option maxHeartbeats 0 in
theorem ff11 : FieldFacts 11 := FieldFacts.of traceSq11 negFacts11 (by decide +kernel)
set_option maxHeartbeats 0 in
theorem ff13 : FieldFacts 13 := FieldFacts.of traceSq13 negFacts13 (by decide +kernel)

theorem S5_generates : S_generates 5 mod5Cert.S = true := by decide +kernel
theorem S7_generates : S_generates 7 mod7Cert.S = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem S11_generates : S_generates 11 mod11Cert.S = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem S13_generates : S_generates 13 mod13Cert.S = true := by decide +kernel
theorem pairs5_ok : mod5Cert.pairs.all (pairOk 5 mod5Cert.S) = true := by decide +kernel
theorem pairs7_ok : mod7Cert.pairs.all (pairOk 7 mod7Cert.S) = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pairs11_ok : mod11Cert.pairs.all (pairOk 11 mod11Cert.S) = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pairs13_ok : mod13Cert.pairs.all (pairOk 13 mod13Cert.S) = true := by decide +kernel
theorem curves5_ok : mod5Cert.curves.all (curveOk 5 mod5Cert) = true := by decide +kernel
theorem curves7_ok : mod7Cert.curves.all (curveOk 7 mod7Cert) = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem curves11_ok : mod11Cert.curves.all (curveOk 11 mod11Cert) = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem curves13_ok : mod13Cert.curves.all (curveOk 13 mod13Cert) = true := by decide +kernel

def allLabels : List String :=
  ["11a1", "17a1", "19a1", "37a1", "37b1", "43a1", "53a1", "61a1", "67a1", "73a1", "79a1", "83a1", "89a1", "89b1", "101a1"]

theorem mod5_curve_labels : mod5Cert.curves.map (·.label) = allLabels.filter (· != "11a1") := by decide +kernel
theorem mod7_curve_labels : mod7Cert.curves.map (·.label) = allLabels := by decide +kernel
set_option maxHeartbeats 0 in
theorem mod11_curve_labels : mod11Cert.curves.map (·.label) = allLabels := by decide +kernel
set_option maxHeartbeats 0 in
theorem mod13_curve_labels : mod13Cert.curves.map (·.label) = allLabels := by decide +kernel

end Mat2

open Mat2 in
/-- **ρ̄₅ is surjective for the 14 Cremona curves of prime level other than 11a1** (which has a rational
5-torsion point): for each listed curve, any multiplicatively closed subset of GL₂(𝔽₅) containing
elements with the characteristic polynomials of ρ̄₅(Frob_{p₁}), ρ̄₅(Frob_{p₂}) is all of GL₂(𝔽₅). -/
theorem mod5_images_full {c : CurveCert} (hc : c ∈ mod5Cert.curves)
    (H : List (Mat2 5)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H) {g h : Mat2 5} (hg : g ∈ H) (hh : h ∈ H)
    (hA : g.trace = finN (apMod 5 c.ainvs c.p1) ∧ g.det = finN c.p1)
    (hB : h.trace = finN (apMod 5 c.ainvs c.p2) ∧ h.det = finN c.p2) : ∀ z ∈ gl 5, z ∈ H :=
  data_sound ff5 mod5Cert S5_generates pairs5_ok curves5_ok hc H hmul hg hh hA hB

open Mat2 in
/-- **ρ̄₇ is surjective for all 15 Cremona curves of prime level.** -/
theorem mod7_images_full {c : CurveCert} (hc : c ∈ mod7Cert.curves)
    (H : List (Mat2 7)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H) {g h : Mat2 7} (hg : g ∈ H) (hh : h ∈ H)
    (hA : g.trace = finN (apMod 7 c.ainvs c.p1) ∧ g.det = finN c.p1)
    (hB : h.trace = finN (apMod 7 c.ainvs c.p2) ∧ h.det = finN c.p2) : ∀ z ∈ gl 7, z ∈ H :=
  data_sound ff7 mod7Cert S7_generates pairs7_ok curves7_ok hc H hmul hg hh hA hB

open Mat2 in
/-- **ρ̄₁₁ is surjective for all 15 Cremona curves of prime level.** -/
theorem mod11_images_full {c : CurveCert} (hc : c ∈ mod11Cert.curves)
    (H : List (Mat2 11)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H) {g h : Mat2 11} (hg : g ∈ H) (hh : h ∈ H)
    (hA : g.trace = finN (apMod 11 c.ainvs c.p1) ∧ g.det = finN c.p1)
    (hB : h.trace = finN (apMod 11 c.ainvs c.p2) ∧ h.det = finN c.p2) : ∀ z ∈ gl 11, z ∈ H :=
  data_sound ff11 mod11Cert S11_generates pairs11_ok curves11_ok hc H hmul hg hh hA hB

open Mat2 in
/-- **ρ̄₁₃ is surjective for all 15 Cremona curves of prime level.** -/
theorem mod13_images_full {c : CurveCert} (hc : c ∈ mod13Cert.curves)
    (H : List (Mat2 13)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H) {g h : Mat2 13} (hg : g ∈ H) (hh : h ∈ H)
    (hA : g.trace = finN (apMod 13 c.ainvs c.p1) ∧ g.det = finN c.p1)
    (hB : h.trace = finN (apMod 13 c.ainvs c.p2) ∧ h.det = finN c.p2) : ∀ z ∈ gl 13, z ∈ H :=
  data_sound ff13 mod13Cert S13_generates pairs13_ok curves13_ok hc H hmul hg hh hA hB

end Oracles
