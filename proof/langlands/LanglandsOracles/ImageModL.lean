import LanglandsOracles.ImageMod2
import LanglandsOracles.Data

/-!
# Mod-ℓ image certificates by words: ρ̄₅ and ρ̄₇ of the Cremona curves are surjective.

A class pair (A, B) of GL₂(𝔽_ℓ) (characteristic polynomials with distinct roots, so single
conjugacy classes without scalars) is *certified* when every subgroup meeting both is the whole
group.  Instead of closing ⟨g, h⟩ for each pair — 480- or 2016-element closures — the certificate is:
1. once per ℓ, one kernel closure showing that S = {E₁₂(1), E₂₁(1), diag(1, ζ)} generates GL₂(𝔽_ℓ)
   (`S_generates`, products by `mulNat`);
2. for the fixed representative gRep of A and every h ∈ B, three short words in {gRep, h} whose
   values are the elements of S (`wordsB`, verified by a few dozen products each);
3. for every g ∈ A a conjugator C with C·gRep·C⁻¹ = g (`witnessesA`).
Soundness (`pair_sound`, PROVED): a multiplicatively closed H containing g ∈ A and h ∈ B is
conjugated by C⁻¹ to H′ ∋ gRep, C⁻¹hC; C⁻¹hC is again in B (B is cut out by tr and tr², which are
conjugation-invariant); the words put S inside H′, the closure of S is GL₂(𝔽_ℓ), and conjugating back
gives GL₂(𝔽_ℓ) ⊆ H, using that conjugation by a unit preserves the enumerated GL₂(𝔽_ℓ) (a left-invertible
matrix kills no nonzero vector, `det_ne_zero_of_left_inverse`).  Everything specific to ℓ is packaged in
`FieldFacts ℓ` (decided or kernel-checked for ℓ = 5, 7).

Arithmetic input: for each curve, Lean's own point counts give a_{p₁}, a_{p₂} mod ℓ (`curves_ok`),
so ρ̄_ℓ(Frob_{p₁}) ∈ A and ρ̄_ℓ(Frob_{p₂}) ∈ B by Eichler–Shimura, the only imported step.  Results:
mod 5 for the 14 curves other than 11a1 (rational 5-torsion), mod 7 for all 15.
-/
namespace Oracles

namespace Mat2

variable {n : Nat} [NeZero n]

-- ---------------------------------------------------------------- raw products --

/-- Raw product of base-n encoded matrices, mirroring `Fin` arithmetic digit by digit. -/
def mulNat (n i j : Nat) : Nat :=
  let a := i % n; let b := i / n % n; let c := i / n / n % n; let d := i / n / n / n % n
  let a' := j % n; let b' := j / n % n; let c' := j / n / n % n; let d' := j / n / n / n % n
  ((a * a' % n + b * c' % n) % n) + n * (((a * b' % n + b * d' % n) % n)
    + n * (((c * a' % n + d * c' % n) % n) + n * ((c * b' % n + d * d' % n) % n)))

theorem mulNat_eq (n : Nat) [NeZero n] (i j : Nat) : mulNat n i j = mulIdx n i j := by
  simp only [mulNat, mulIdx, encode, decode, M2.mul, finN, Fin.val_add, Fin.val_mul]

theorem mulNat_codes (x y : Mat2 n) : mulNat n (encode x) (encode y) = encode (M2.mul x y) := by
  rw [mulNat_eq]; simp only [mulIdx, decode_encode]

/-- Words in two generators (false ↦ g, true ↦ h), evaluated left to right; the empty word is 0. -/
def evalWord (n g h : Nat) : List Bool → Nat
  | [] => 0
  | b :: w => w.foldl (fun acc c => mulNat n acc (if c then h else g)) (if b then h else g)

theorem foldl_codes (H : List (Mat2 n)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H) {g h : Nat}
    (hg : Codes H g) (hh : Codes H h) :
    ∀ (w : List Bool) {acc : Nat}, Codes H acc → Codes H (w.foldl (fun acc c => mulNat n acc (if c then h else g)) acc)
  | [], _, ha => ha
  | c :: w, acc, ha => by
    obtain ⟨x, hx, rfl⟩ := ha
    have hc : Codes H (if c then h else g) := by cases c <;> assumption
    obtain ⟨y, hy, hy'⟩ := hc
    refine foldl_codes H hmul hg hh w ⟨M2.mul x y, hmul x hx y hy, ?_⟩
    show mulNat n (encode x) (if c then h else g) = _
    rw [hy', mulNat_codes]

theorem evalWord_codes (H : List (Mat2 n)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H) {g h : Nat}
    (hg : Codes H g) (hh : Codes H h) {w : List Bool} (hw : w ≠ []) : Codes H (evalWord n g h w) := by
  cases w with
  | nil => exact absurd rfl hw
  | cons b w => exact foldl_codes H hmul hg hh w (by cases b <;> assumption)

-- ---------------------------------------------------------------- group algebra in M₂(ℤ/n) --

local notation "R" => isCSR_fin n

theorem mul_inv_cancel_left' {C C' : Mat2 n} (h : M2.mul C C' = M2.one) (t : Mat2 n) :
    M2.mul C (M2.mul C' t) = t := by
  rw [← M2.mul_assoc R, h, M2.one_mul R]

theorem conj_mul' {C C' : Mat2 n} (h : M2.mul C C' = M2.one) (x y : Mat2 n) :
    M2.mul (M2.mul (M2.mul C' x) C) (M2.mul (M2.mul C' y) C) = M2.mul (M2.mul C' (M2.mul x y)) C := by
  simp only [M2.mul_assoc R, mul_inv_cancel_left' h]

theorem conj_conj' {C C' : Mat2 n} (h : M2.mul C' C = M2.one) (g : Mat2 n) :
    M2.mul (M2.mul C' (M2.mul (M2.mul C g) C')) C = g := by
  simp only [M2.mul_assoc R, mul_inv_cancel_left' h]
  rw [h, M2.mul_one R]

theorem conj_cancel' {C C' : Mat2 n} (h : M2.mul C C' = M2.one) (z : Mat2 n) :
    M2.mul (M2.mul C (M2.mul (M2.mul C' z) C)) C' = z := by
  simp only [M2.mul_assoc R, mul_inv_cancel_left' h]
  rw [h, M2.mul_one R]

theorem trace_conj' {C C' : Mat2 n} (h : M2.mul C C' = M2.one) (x : Mat2 n) :
    (M2.mul (M2.mul C' x) C).trace = x.trace := by
  rw [M2.trace_mul_comm R, ← M2.mul_assoc R, h, M2.one_mul R]

def applyV (w : Mat2 n) (v : Fin n × Fin n) : Fin n × Fin n := (w.a * v.1 + w.b * v.2, w.c * v.1 + w.d * v.2)

theorem apply_mul (w w' : Mat2 n) (v : Fin n × Fin n) : applyV (M2.mul w w') v = applyV w (applyV w' v) := by
  haveI : Std.Associative (α := Fin n) (· + ·) := ⟨(R).add_assoc⟩
  haveI : Std.Commutative (α := Fin n) (· + ·) := ⟨(R).add_comm⟩
  simp only [applyV, M2.mul, (R).add_mul, (R).mul_add, (R).mul_assoc, Prod.mk.injEq]
  exact ⟨by ac_rfl, by ac_rfl⟩

theorem apply_one (v : Fin n × Fin n) : applyV (M2.one : Mat2 n) v = v := by
  obtain ⟨v1, v2⟩ := v
  simp only [applyV, M2.one, (R).one_mul, (R).zero_mul, (R).add_zero, (R).zero_add]

theorem apply_zero (w : Mat2 n) : applyV w (0, 0) = (0, 0) := by
  simp only [applyV, (R).mul_zero, (R).add_zero]

theorem mul_zero_mat (w : Mat2 n) : M2.mul w ⟨0, 0, 0, 0⟩ = ⟨0, 0, 0, 0⟩ := by
  simp only [M2.mul, (R).mul_zero, (R).add_zero]

/-- The facts about ℤ/n that the certificate needs, decided or kernel-checked per n. -/
structure FieldFacts (n : Nat) [NeZero n] : Prop where
  trace_sq : ∀ x : Mat2 n, (M2.mul x x).trace = x.trace * x.trace - 2 * x.det
  kernel_vectors : ∀ a b c d : Fin n, a * d - b * c = 0 →
    applyV ⟨a, b, c, d⟩ (d, 0 - c) = (0, 0) ∧ applyV ⟨a, b, c, d⟩ (0 - b, a) = (0, 0)
  neg_eq_zero : ∀ c : Fin n, 0 - c = 0 → c = 0
  one_ne_zero : (1 : Fin n) ≠ 0
  inv : ∀ z ∈ gl n, ∃ z' : Mat2 n, M2.mul z' z = M2.one

section withFieldFacts

variable (ff : FieldFacts n)
include ff

theorem det_ne_zero_of_left_inverse (w w' : Mat2 n) (h : M2.mul w' w = M2.one) : w.det.val ≠ 0 := by
  intro hz
  obtain ⟨a, b, c, d⟩ := w
  have hd : a * d - b * c = 0 := Fin.ext hz
  obtain ⟨k1, k2⟩ := ff.kernel_vectors a b c d hd
  have fix : ∀ v, applyV ⟨a, b, c, d⟩ v = (0, 0) → v = (0, 0) := by
    intro v hv
    have e : applyV (M2.mul w' ⟨a, b, c, d⟩) v = v := by rw [h, apply_one]
    rw [apply_mul, hv, apply_zero] at e
    exact e.symm
  have e1 := fix _ k1
  have e2 := fix _ k2
  obtain ⟨hd0, hc0⟩ := Prod.mk.inj e1
  obtain ⟨hb0, ha0⟩ := Prod.mk.inj e2
  have hc : c = 0 := ff.neg_eq_zero c hc0
  have hb : b = 0 := ff.neg_eq_zero b hb0
  subst hd0 ha0 hc hb
  have : M2.mul w' ⟨0, 0, 0, 0⟩ = M2.one := h
  rw [mul_zero_mat] at this
  exact ff.one_ne_zero (congrArg M2.a this).symm

theorem conj_mem_gl {C C' : Mat2 n} (hCC' : M2.mul C C' = M2.one) (hC'C : M2.mul C' C = M2.one)
    {z : Mat2 n} (hz : z ∈ gl n) : M2.mul (M2.mul C' z) C ∈ gl n := by
  obtain ⟨z', hz'⟩ := ff.inv z hz
  refine mem_gl _ (det_ne_zero_of_left_inverse ff _ (M2.mul (M2.mul C' z') C) ?_)
  rw [conj_mul' hCC', hz', M2.mul_one R, hC'C]

end withFieldFacts

/-- Class B through traces: tr h = t_B and tr h² = t_B² − 2 d_B (Cayley–Hamilton); conjugation-invariant. -/
def classB' (pr : PairCert) (x : Mat2 n) : Bool :=
  x.trace == finN pr.tB && (M2.mul x x).trace == finN pr.tB * finN pr.tB - 2 * finN pr.dB

theorem classB'_conj {C C' : Mat2 n} (h : M2.mul C C' = M2.one) {pr : PairCert} {x : Mat2 n}
    (hx : classB' pr x = true) : classB' pr (M2.mul (M2.mul C' x) C) = true := by
  unfold classB' at hx ⊢
  rw [conj_mul' h, trace_conj' h, trace_conj' h]
  exact hx

theorem classB'_of_charpoly (ff : FieldFacts n) {pr : PairCert} {h : Mat2 n} (ht : h.trace = finN pr.tB) (hd : h.det = finN pr.dB) :
    classB' pr h = true := by
  unfold classB'
  rw [ff.trace_sq, ht, hd]
  exact Bool.and_eq_true _ _ |>.mpr ⟨beq_iff_eq.mpr rfl, beq_iff_eq.mpr rfl⟩

-- ---------------------------------------------------------------- the certificate --

/-- The closure of S under `mulNat` covers every code of GL₂(ℤ/n). -/
def S_generates (n : Nat) [NeZero n] (S : List Nat) : Bool :=
  ((gl n).map encode).all fun x => (closureIdx (mulNat n) S (n ^ 4) (mask 0 S) S).testBit x

def pairOk (n : Nat) [NeZero n] (S : List Nat) (pr : PairCert) : Bool :=
  pr.dA % n != 0 && pr.dB % n != 0 && encode (decode n pr.gRep) == pr.gRep &&
  ((gl n).filter fun g => g.trace == finN pr.tA && g.det == finN pr.dA).all (fun g =>
    pr.witnessesA.any fun w =>
      w.1 == encode g && mulNat n (mulNat n w.2.1 pr.gRep) w.2.2 == encode g
        && mulNat n w.2.1 w.2.2 == encode (M2.one : Mat2 n) && mulNat n w.2.2 w.2.1 == encode (M2.one : Mat2 n)) &&
  ((gl n).filter (classB' pr)).all (fun h =>
    pr.wordsB.any fun e =>
      e.1 == encode h
        && S.all fun s => e.2.any fun sw => sw.1 == s && sw.2 != [] && evalWord n pr.gRep e.1 sw.2 == s)

theorem code_eq {i j : Nat} {m : Mat2 n} (e : (mulNat n i j == encode m) = true) :
    M2.mul (decode n i) (decode n j) = m := by
  have := beq_iff_eq.mp e
  rw [mulNat_eq] at this
  exact encode_inj this

set_option maxRecDepth 8192 in
/-- **Soundness of a certified pair.** -/
theorem pair_sound (ff : FieldFacts n) (S : List Nat) (hS : S_generates n S = true) (pr : PairCert) (hok : pairOk n S pr = true)
    (H : List (Mat2 n)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H)
    {g h : Mat2 n} (hg : g ∈ H) (hh : h ∈ H)
    (hA : g.trace = finN pr.tA ∧ g.det = finN pr.dA) (hB : h.trace = finN pr.tB ∧ h.det = finN pr.dB) :
    ∀ z ∈ gl n, z ∈ H := by
  unfold pairOk at hok
  have h4 := (Bool.and_eq_true _ _ |>.mp hok).2
  have h3 := (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp hok).1).2
  have h123 := (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp hok).1).1
  have hgRep : encode (decode n pr.gRep) = pr.gRep := beq_iff_eq.mp (Bool.and_eq_true _ _ |>.mp h123).2
  have hdA := bne_iff_ne.mp (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp h123).1).1
  have hdB := bne_iff_ne.mp (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp h123).1).2
  -- g ∈ GL₂ and its conjugator
  have hgl : g ∈ gl n := mem_gl g (by rw [hA.2]; exact hdA)
  have hgA : g ∈ (gl n).filter fun g => g.trace == finN pr.tA && g.det == finN pr.dA :=
    List.mem_filter.mpr ⟨hgl, by rw [hA.1, hA.2]; exact Bool.and_eq_true _ _ |>.mpr ⟨beq_iff_eq.mpr rfl, beq_iff_eq.mpr rfl⟩⟩
  obtain ⟨w, _, hw⟩ := List.any_eq_true.mp (List.all_eq_true.mp h3 g hgA)
  have hw4 := (Bool.and_eq_true _ _ |>.mp hw).2
  have hw3 := (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp hw).1).2
  have hw2 := (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp hw).1).1).2
  have hCg : M2.mul (M2.mul (decode n w.2.1) (decode n pr.gRep)) (decode n w.2.2) = g := by
    have := code_eq hw2
    rw [mulNat_eq] at this
    simp only [mulIdx, decode_encode] at this
    exact this
  have hCC' : M2.mul (decode n w.2.1) (decode n w.2.2) = M2.one := code_eq hw3
  have hC'C : M2.mul (decode n w.2.2) (decode n w.2.1) = M2.one := code_eq hw4
  generalize decode n w.2.1 = C at hCg hCC' hC'C
  generalize decode n w.2.2 = C' at hCg hCC' hC'C
  -- conjugate H
  let H' := H.map fun x => M2.mul (M2.mul C' x) C
  have hmul' : ∀ x ∈ H', ∀ y ∈ H', M2.mul x y ∈ H' := by
    intro x hx y hy
    obtain ⟨x0, hx0, rfl⟩ := List.mem_map.mp hx
    obtain ⟨y0, hy0, rfl⟩ := List.mem_map.mp hy
    exact List.mem_map.mpr ⟨M2.mul x0 y0, hmul x0 hx0 y0 hy0, (conj_mul' hCC' x0 y0).symm⟩
  have hgRep' : decode n pr.gRep ∈ H' := List.mem_map.mpr ⟨g, hg, by rw [← hCg, conj_conj' hC'C]⟩
  have hh' : M2.mul (M2.mul C' h) C ∈ H' := List.mem_map.mpr ⟨h, hh, rfl⟩
  have hB' : classB' pr (M2.mul (M2.mul C' h) C) = true := classB'_conj hCC' (classB'_of_charpoly ff hB.1 hB.2)
  have hhgl : M2.mul (M2.mul C' h) C ∈ gl n := conj_mem_gl ff hCC' hC'C (mem_gl h (by rw [hB.2]; exact hdB))
  -- the words put S inside H′
  obtain ⟨e, _, he⟩ := List.any_eq_true.mp (List.all_eq_true.mp h4 _ (List.mem_filter.mpr ⟨hhgl, hB'⟩))
  have he1 : e.1 = encode (M2.mul (M2.mul C' h) C) := beq_iff_eq.mp (Bool.and_eq_true _ _ |>.mp he).1
  have hwords := (Bool.and_eq_true _ _ |>.mp he).2
  have hSH : ∀ s ∈ S, Codes H' s := by
    intro s hs
    obtain ⟨sw, _, hsw⟩ := List.any_eq_true.mp (List.all_eq_true.mp hwords s hs)
    have hne : sw.2 ≠ [] := bne_iff_ne.mp (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp hsw).1).2
    have hev : evalWord n pr.gRep e.1 sw.2 = s := beq_iff_eq.mp (Bool.and_eq_true _ _ |>.mp hsw).2
    have hc := evalWord_codes H' hmul' ⟨decode n pr.gRep, hgRep', hgRep.symm⟩ ⟨_, hh', he1⟩ hne
    rw [hev] at hc
    exact hc
  have hm : ∀ y ∈ H', ∀ s ∈ S, ∃ z ∈ H', mulNat n (encode y) s = encode z := by
    intro y hy s hs
    obtain ⟨ys, hys, rfl⟩ := hSH s hs
    exact ⟨M2.mul y ys, hmul' y hy ys hys, mulNat_codes y ys⟩
  have hmem := closureIdx_mem H' (mulNat n) S hm S hSH (n ^ 4)
  -- conjugate back
  unfold S_generates at hS
  intro z hz
  have hz' := conj_mem_gl ff hCC' hC'C hz
  have hbit := List.all_eq_true.mp hS _ (List.mem_map_of_mem hz')
  obtain ⟨y, hy, e⟩ := List.mem_map.mp (hmem _ hbit)
  have h2 : M2.mul (M2.mul C (M2.mul (M2.mul C' z) C)) C' = M2.mul (M2.mul C (M2.mul (M2.mul C' y) C)) C' := by
    rw [e]
  rw [conj_cancel' hCC', conj_cancel' hCC'] at h2
  exact h2 ▸ hy

-- ---------------------------------------------------------------- per-curve arithmetic --

/-- a_p mod n as a natural, from Lean's point count of the Weierstrass model. -/
def apMod (n : Nat) (a : List Int) (p : Nat) : Nat := ((apGeneral a p % n + n) % n).toNat

def curveOk (n : Nat) (d : ModLData) (c : CurveCert) : Bool :=
  match d.pairs[c.pair]? with
  | some pr => apMod n c.ainvs c.p1 == pr.tA && c.p1 % n == pr.dA && apMod n c.ainvs c.p2 == pr.tB && c.p2 % n == pr.dB
  | none => false

/-- **Soundness of a whole data set**: for every listed curve, any multiplicatively closed subset of
GL₂(𝔽_ℓ) containing an element with the characteristic polynomial of ρ̄_ℓ(Frob_{p₁}) and one with that
of ρ̄_ℓ(Frob_{p₂}) — traces a_{p₁}, a_{p₂} from Lean's point counts, determinants p₁, p₂ — is all of GL₂(𝔽_ℓ). -/
theorem data_sound (ff : FieldFacts n) (d : ModLData) (hS : S_generates n d.S = true)
    (hpairs : d.pairs.all (pairOk n d.S) = true) (hcurves : d.curves.all (curveOk n d) = true)
    {c : CurveCert} (hc : c ∈ d.curves)
    (H : List (Mat2 n)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H) {g h : Mat2 n} (hg : g ∈ H) (hh : h ∈ H)
    (hA : g.trace = finN (apMod n c.ainvs c.p1) ∧ g.det = finN c.p1)
    (hB : h.trace = finN (apMod n c.ainvs c.p2) ∧ h.det = finN c.p2) : ∀ z ∈ gl n, z ∈ H := by
  have hok := List.all_eq_true.mp hcurves c hc
  unfold curveOk at hok
  split at hok
  · next pr hpr =>
    have hprm : pr ∈ d.pairs := List.mem_of_getElem? hpr
    have e1 := beq_iff_eq.mp (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp hok).1).1).1
    have e2 := beq_iff_eq.mp (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp hok).1).1).2
    have e3 := beq_iff_eq.mp (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp hok).1).2
    have e4 := beq_iff_eq.mp (Bool.and_eq_true _ _ |>.mp hok).2
    have hmod : ∀ k : Nat, (finN (k % n) : Fin n) = finN k := fun k => Fin.ext (Nat.mod_mod k n)
    refine pair_sound ff d.S hS pr (List.all_eq_true.mp hpairs pr hprm) H hmul hg hh ⟨?_, ?_⟩ ⟨?_, ?_⟩
    · rw [hA.1, e1]
    · rw [hA.2, ← e2, hmod]
    · rw [hB.1, e3]
    · rw [hB.2, ← e4, hmod]
  · exact absurd hok Bool.false_ne_true

-- ---------------------------------------------------------------- ℓ = 5 and ℓ = 7 --

/-- Adjugate over det⁻¹, tables for 𝔽₅ and 𝔽₇. -/
def inv5 (x : Mat2 5) : Mat2 5 :=
  let u : Fin 5 := match x.det with | 1 => 1 | 2 => 3 | 3 => 2 | 4 => 4 | _ => 0
  ⟨u * x.d, u * (0 - x.b), u * (0 - x.c), u * x.a⟩

def inv7 (x : Mat2 7) : Mat2 7 :=
  let u : Fin 7 := match x.det with | 1 => 1 | 2 => 4 | 3 => 5 | 4 => 2 | 5 => 3 | 6 => 6 | _ => 0
  ⟨u * x.d, u * (0 - x.b), u * (0 - x.c), u * x.a⟩

theorem inv_all5 : (gl 5).all (fun z => M2.mul (inv5 z) z == M2.one) = true := by decide +kernel
theorem inv_all7 : (gl 7).all (fun z => M2.mul (inv7 z) z == M2.one) = true := by decide +kernel

theorem trace_sq5 : ∀ x : Mat2 5, (M2.mul x x).trace = x.trace * x.trace - 2 * x.det := by
  intro x
  obtain ⟨a, b, c, d⟩ := x
  have key : ∀ a b c d : Fin 5, (a * a + b * c) + (c * b + d * d) = (a + d) * (a + d) - 2 * (a * d - b * c) := by decide
  exact key a b c d

theorem trace_sq7 : ∀ x : Mat2 7, (M2.mul x x).trace = x.trace * x.trace - 2 * x.det := by
  intro x
  obtain ⟨a, b, c, d⟩ := x
  have key : ∀ a b c d : Fin 7, (a * a + b * c) + (c * b + d * d) = (a + d) * (a + d) - 2 * (a * d - b * c) := by
    decide +kernel
  exact key a b c d

theorem ff5 : FieldFacts 5 where
  trace_sq := trace_sq5
  kernel_vectors := by decide +kernel
  neg_eq_zero := by decide
  one_ne_zero := by decide
  inv := fun z hz => ⟨inv5 z, beq_iff_eq.mp (List.all_eq_true.mp inv_all5 z hz)⟩

theorem ff7 : FieldFacts 7 where
  trace_sq := trace_sq7
  kernel_vectors := by decide +kernel
  neg_eq_zero := by decide
  one_ne_zero := by decide
  inv := fun z hz => ⟨inv7 z, beq_iff_eq.mp (List.all_eq_true.mp inv_all7 z hz)⟩

theorem S5_generates : S_generates 5 mod5Cert.S = true := by decide +kernel
theorem S7_generates : S_generates 7 mod7Cert.S = true := by decide +kernel
theorem pairs5_ok : mod5Cert.pairs.all (pairOk 5 mod5Cert.S) = true := by decide +kernel
theorem pairs7_ok : mod7Cert.pairs.all (pairOk 7 mod7Cert.S) = true := by decide +kernel
theorem curves5_ok : mod5Cert.curves.all (curveOk 5 mod5Cert) = true := by decide +kernel
theorem curves7_ok : mod7Cert.curves.all (curveOk 7 mod7Cert) = true := by decide +kernel

theorem mod5_curve_labels : mod5Cert.curves.map (·.label) =
    ["17a1", "19a1", "37a1", "37b1", "43a1", "53a1", "61a1", "67a1", "73a1", "79a1", "83a1", "89a1", "89b1", "101a1"] := by
  decide +kernel
theorem mod7_curve_labels : mod7Cert.curves.map (·.label) =
    ["11a1", "17a1", "19a1", "37a1", "37b1", "43a1", "53a1", "61a1", "67a1", "73a1", "79a1", "83a1", "89a1", "89b1", "101a1"] := by
  decide +kernel

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

end Oracles
