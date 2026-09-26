import LanglandsOracles.ImageModL

/-!
# ρ̄_ℓ for the 15 Cremona curves of prime level, ℓ = 5, 7, 11, 13, 17

The instances of `ImageModL`: for each ℓ the field facts, the generation of GL₂(𝔽_ℓ) by S, the certified
class pairs (one declaration per pair, so the kernel frees its cache between them) and the per-curve
arithmetic, all kernel-checked on the exported data (`Data`), then the
headlines `modℓ_images_full`.  The ℓ ≥ 11 checks lift the default heartbeat limit.
-/
namespace Oracles

namespace Mat2

theorem traceSq5 : ∀ a b c d : Fin 5, (a * a + b * c) + (c * b + d * d) = (a + d) * (a + d) - 2 * (a * d - b * c) := by trace_sq_tac
theorem traceSq7 : ∀ a b c d : Fin 7, (a * a + b * c) + (c * b + d * d) = (a + d) * (a + d) - 2 * (a * d - b * c) := by trace_sq_tac
theorem traceSq11 : ∀ a b c d : Fin 11, (a * a + b * c) + (c * b + d * d) = (a + d) * (a + d) - 2 * (a * d - b * c) := by trace_sq_tac

theorem traceSq13 : ∀ a b c d : Fin 13, (a * a + b * c) + (c * b + d * d) = (a + d) * (a + d) - 2 * (a * d - b * c) := by trace_sq_tac
theorem traceSq17 : ∀ a b c d : Fin 17, (a * a + b * c) + (c * b + d * d) = (a + d) * (a + d) - 2 * (a * d - b * c) := by trace_sq_tac

theorem negFacts5 : NegFacts 5 := ⟨by decide, by decide, by decide, by decide⟩
theorem negFacts7 : NegFacts 7 := ⟨by decide, by decide, by decide, by decide⟩
theorem negFacts11 : NegFacts 11 := ⟨by decide, by decide, by decide, by decide⟩
theorem negFacts13 : NegFacts 13 := ⟨by decide, by decide, by decide, by decide⟩
theorem negFacts17 : NegFacts 17 := ⟨by decide, by decide, by decide, by decide⟩

theorem ff5 : FieldFacts 5 := FieldFacts.of traceSq5 negFacts5 (by decide +kernel)
theorem ff7 : FieldFacts 7 := FieldFacts.of traceSq7 negFacts7 (by decide +kernel)
set_option maxHeartbeats 0 in
theorem ff11 : FieldFacts 11 := FieldFacts.of traceSq11 negFacts11 (by decide +kernel)
set_option maxHeartbeats 0 in
theorem ff13 : FieldFacts 13 := FieldFacts.of traceSq13 negFacts13 (by decide +kernel)
set_option maxHeartbeats 0 in
theorem ff17 : FieldFacts 17 := FieldFacts.of traceSq17 negFacts17 (by decide +kernel)

theorem S5_generates : S_generates 5 mod5Cert.zeta mod5Cert.S = true := by decide +kernel
theorem S7_generates : S_generates 7 mod7Cert.zeta mod7Cert.S = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem S11_generates : S_generates 11 mod11Cert.zeta mod11Cert.S = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem S13_generates : S_generates 13 mod13Cert.zeta mod13Cert.S = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem S17_generates : S_generates 17 mod17Cert.zeta mod17Cert.S = true := by decide +kernel
theorem pair5_0 : pairOk 5 mod5Cert.S mod5Pair0 = true := by decide +kernel
theorem pair5_1 : pairOk 5 mod5Cert.S mod5Pair1 = true := by decide +kernel
theorem pair5_2 : pairOk 5 mod5Cert.S mod5Pair2 = true := by decide +kernel
theorem pairs5_ok : mod5Cert.pairs.all (pairOk 5 mod5Cert.S) = true := by
  show mod5Pairs.all _ = true
  unfold mod5Pairs
  simp only [List.all_cons, List.all_nil, pair5_0, pair5_1, pair5_2, Bool.true_and]
theorem pair7_0 : pairOk 7 mod7Cert.S mod7Pair0 = true := by decide +kernel
theorem pair7_1 : pairOk 7 mod7Cert.S mod7Pair1 = true := by decide +kernel
theorem pair7_2 : pairOk 7 mod7Cert.S mod7Pair2 = true := by decide +kernel
theorem pair7_3 : pairOk 7 mod7Cert.S mod7Pair3 = true := by decide +kernel
theorem pairs7_ok : mod7Cert.pairs.all (pairOk 7 mod7Cert.S) = true := by
  show mod7Pairs.all _ = true
  unfold mod7Pairs
  simp only [List.all_cons, List.all_nil, pair7_0, pair7_1, pair7_2, pair7_3, Bool.true_and]
set_option maxHeartbeats 0 in
theorem pair11_0 : pairOk 11 mod11Cert.S mod11Pair0 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair11_1 : pairOk 11 mod11Cert.S mod11Pair1 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair11_2 : pairOk 11 mod11Cert.S mod11Pair2 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair11_3 : pairOk 11 mod11Cert.S mod11Pair3 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair11_4 : pairOk 11 mod11Cert.S mod11Pair4 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair11_5 : pairOk 11 mod11Cert.S mod11Pair5 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair11_6 : pairOk 11 mod11Cert.S mod11Pair6 = true := by decide +kernel
theorem pairs11_ok : mod11Cert.pairs.all (pairOk 11 mod11Cert.S) = true := by
  show mod11Pairs.all _ = true
  unfold mod11Pairs
  simp only [List.all_cons, List.all_nil, pair11_0, pair11_1, pair11_2, pair11_3, pair11_4, pair11_5, pair11_6, Bool.true_and]
set_option maxHeartbeats 0 in
theorem pair13_0 : pairOk 13 mod13Cert.S mod13Pair0 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair13_1 : pairOk 13 mod13Cert.S mod13Pair1 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair13_2 : pairOk 13 mod13Cert.S mod13Pair2 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair13_3 : pairOk 13 mod13Cert.S mod13Pair3 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair13_4 : pairOk 13 mod13Cert.S mod13Pair4 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair13_5 : pairOk 13 mod13Cert.S mod13Pair5 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair13_6 : pairOk 13 mod13Cert.S mod13Pair6 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair13_7 : pairOk 13 mod13Cert.S mod13Pair7 = true := by decide +kernel
theorem pairs13_ok : mod13Cert.pairs.all (pairOk 13 mod13Cert.S) = true := by
  show mod13Pairs.all _ = true
  unfold mod13Pairs
  simp only [List.all_cons, List.all_nil, pair13_0, pair13_1, pair13_2, pair13_3, pair13_4, pair13_5, pair13_6, pair13_7, Bool.true_and]
set_option maxHeartbeats 0 in
theorem pair17_0 : pairOk 17 mod17Cert.S mod17Pair0 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair17_1 : pairOk 17 mod17Cert.S mod17Pair1 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair17_2 : pairOk 17 mod17Cert.S mod17Pair2 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair17_3 : pairOk 17 mod17Cert.S mod17Pair3 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair17_4 : pairOk 17 mod17Cert.S mod17Pair4 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair17_5 : pairOk 17 mod17Cert.S mod17Pair5 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair17_6 : pairOk 17 mod17Cert.S mod17Pair6 = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem pair17_7 : pairOk 17 mod17Cert.S mod17Pair7 = true := by decide +kernel
theorem pairs17_ok : mod17Cert.pairs.all (pairOk 17 mod17Cert.S) = true := by
  show mod17Pairs.all _ = true
  unfold mod17Pairs
  simp only [List.all_cons, List.all_nil, pair17_0, pair17_1, pair17_2, pair17_3, pair17_4, pair17_5, pair17_6, pair17_7, Bool.true_and]
theorem curves5_ok : mod5Cert.curves.all (curveOk 5 mod5Cert) = true := by decide +kernel
theorem curves7_ok : mod7Cert.curves.all (curveOk 7 mod7Cert) = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem curves11_ok : mod11Cert.curves.all (curveOk 11 mod11Cert) = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem curves13_ok : mod13Cert.curves.all (curveOk 13 mod13Cert) = true := by decide +kernel
set_option maxHeartbeats 0 in
theorem curves17_ok : mod17Cert.curves.all (curveOk 17 mod17Cert) = true := by decide +kernel

def allLabels : List String :=
  ["11a1", "17a1", "19a1", "37a1", "37b1", "43a1", "53a1", "61a1", "67a1", "73a1", "79a1", "83a1", "89a1", "89b1", "101a1"]

theorem mod5_curve_labels : mod5Cert.curves.map (·.label) = allLabels.filter (· != "11a1") := by decide +kernel
theorem mod7_curve_labels : mod7Cert.curves.map (·.label) = allLabels := by decide +kernel
set_option maxHeartbeats 0 in
theorem mod11_curve_labels : mod11Cert.curves.map (·.label) = allLabels := by decide +kernel
set_option maxHeartbeats 0 in
theorem mod13_curve_labels : mod13Cert.curves.map (·.label) = allLabels := by decide +kernel
set_option maxHeartbeats 0 in
theorem mod17_curve_labels : mod17Cert.curves.map (·.label) = allLabels := by decide +kernel

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

open Mat2 in
/-- **ρ̄₁₇ is surjective for all 15 Cremona curves of prime level.** -/
theorem mod17_images_full {c : CurveCert} (hc : c ∈ mod17Cert.curves)
    (H : List (Mat2 17)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H) {g h : Mat2 17} (hg : g ∈ H) (hh : h ∈ H)
    (hA : g.trace = finN (apMod 17 c.ainvs c.p1) ∧ g.det = finN c.p1)
    (hB : h.trace = finN (apMod 17 c.ainvs c.p2) ∧ h.det = finN c.p2) : ∀ z ∈ gl 17, z ∈ H :=
  data_sound ff17 mod17Cert S17_generates pairs17_ok curves17_ok hc H hmul hg hh hA hB

end Oracles
