import LanglandsOracles.ImageMod2
import LanglandsOracles.Data

/-!
# Mod-ℓ image certificates by words: ρ̄_ℓ of the Cremona curves is surjective, ℓ ≤ 13.

A class pair (A, B) of GL₂(𝔽_ℓ) (characteristic polynomials with distinct roots, so single
conjugacy classes without scalars) is *certified* when every subgroup meeting both is the whole
group.  Instead of closing ⟨g, h⟩ for each pair — 480- or 2016-element closures — the certificate is:
1. once per ℓ, one kernel closure showing that S = {E₁₂(1), T = [[1, 0], [1, ζ]]} generates GL₂(𝔽_ℓ)
   (`S_generates`, right multiplications by the two generators specialised on codes, `mulE12`, `mulT`);
2. for the fixed representative gRep of A and every h ∈ B, two short words in {gRep, h} whose
   values are the elements of S (`wordsB`, verified by a few dozen products each);
3. for every g ∈ A a conjugator C with C·gRep·C⁻¹ = g (`witnessesA`).
Soundness (`pair_sound`, PROVED): a multiplicatively closed H containing g ∈ A and h ∈ B is
conjugated by C⁻¹ to H′ ∋ gRep, C⁻¹hC; C⁻¹hC is again in B (B is cut out by tr and tr², which are
conjugation-invariant); the words put S inside H′, the closure of S is GL₂(𝔽_ℓ), and conjugating back
gives GL₂(𝔽_ℓ) ⊆ H, using that conjugation by a unit preserves the enumerated GL₂(𝔽_ℓ) (a left-invertible
matrix kills no nonzero vector, `det_ne_zero_of_left_inverse`).  Everything specific to ℓ is packaged in
`FieldFacts ℓ` (decided or kernel-checked per ℓ in `ModLImages`).

Arithmetic input: for each curve, Lean's own point counts give a_{p₁}, a_{p₂} mod ℓ (`curves_ok`),
so ρ̄_ℓ(Frob_{p₁}) ∈ A and ρ̄_ℓ(Frob_{p₂}) ∈ B by Eichler–Shimura, the only imported step.  Results:
mod 5 for the 14 curves other than 11a1 (rational 5-torsion); mod 7, 11 and 13 for all 15.
Kernel bookkeeping that made this feasible: every arithmetic step is a `Nat.*` call on literals (an
operator's instance chain is unfolded and cached link by link at every call, and that triples the kernel's
work), the closure keeps its frontier as a list of codes and never scans the code range, class membership
is tested on codes rather than on filtered lists of matrices, and the ℓ ≥ 11 checks lift the default
heartbeat limit.  The per-ℓ instances and the headlines are in `ModLImages`.
-/
namespace Oracles

namespace Mat2

variable {n : Nat} [NeZero n]

-- ---------------------------------------------------------------- raw products --

/-- Raw product of base-n encoded matrices, mirroring `Fin` arithmetic digit by digit, through `Nat.*`
directly: an operator's instance chain is unfolded and cached link by link at every call, and that
triples the kernel's work. -/
def mulNat (n i j : Nat) : Nat :=
  let a := Nat.mod i n; let i1 := Nat.div i n; let b := Nat.mod i1 n; let i2 := Nat.div i1 n
  let c := Nat.mod i2 n; let d := Nat.mod (Nat.div i2 n) n
  let a' := Nat.mod j n; let j1 := Nat.div j n; let b' := Nat.mod j1 n; let j2 := Nat.div j1 n
  let c' := Nat.mod j2 n; let d' := Nat.mod (Nat.div j2 n) n
  Nat.add (Nat.mod (Nat.add (Nat.mul a a') (Nat.mul b c')) n)
    (Nat.mul n (Nat.add (Nat.mod (Nat.add (Nat.mul a b') (Nat.mul b d')) n)
      (Nat.mul n (Nat.add (Nat.mod (Nat.add (Nat.mul c a') (Nat.mul d c')) n)
        (Nat.mul n (Nat.mod (Nat.add (Nat.mul c b') (Nat.mul d d')) n))))))

theorem mulNat_eq (n : Nat) [NeZero n] (i j : Nat) : mulNat n i j = mulIdx n i j := by
  simp only [mulNat, mulIdx, encode, decode, M2.mul, finN, Fin.val_add, Fin.val_mul, ← Nat.add_mod]
  rfl

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
def ClassB (pr : PairCert) (x : Mat2 n) : Prop :=
  x.trace = finN pr.tB ∧ (M2.mul x x).trace = finN pr.tB * finN pr.tB - 2 * finN pr.dB

theorem ClassB_conj {C C' : Mat2 n} (h : M2.mul C C' = M2.one) {pr : PairCert} {x : Mat2 n}
    (hx : ClassB pr x) : ClassB pr (M2.mul (M2.mul C' x) C) := by
  unfold ClassB at hx ⊢
  rw [conj_mul' h, trace_conj' h, trace_conj' h]
  exact hx

theorem ClassB_of_charpoly (ff : FieldFacts n) {pr : PairCert} {h : Mat2 n} (ht : h.trace = finN pr.tB) (hd : h.det = finN pr.dB) :
    ClassB pr h := by
  unfold ClassB
  rw [ff.trace_sq, ht, hd]
  exact ⟨rfl, rfl⟩

-- ---------------------------------------------------------------- codes: digits, trace, determinant --

theorem digit_a (x : Mat2 n) : Nat.mod (encode x) n = x.a.val := congrArg (fun m : Mat2 n => m.a.val) (decode_encode x)
theorem digit_b (x : Mat2 n) : Nat.mod (Nat.div (encode x) n) n = x.b.val := congrArg (fun m : Mat2 n => m.b.val) (decode_encode x)
theorem digit_c (x : Mat2 n) : Nat.mod (Nat.div (Nat.div (encode x) n) n) n = x.c.val :=
  congrArg (fun m : Mat2 n => m.c.val) (decode_encode x)
theorem digit_d (x : Mat2 n) : Nat.mod (Nat.div (Nat.div (Nat.div (encode x) n) n) n) n = x.d.val :=
  congrArg (fun m : Mat2 n => m.d.val) (decode_encode x)

/-- Trace and determinant on codes. -/
def trCode (n i : Nat) : Nat := Nat.mod (Nat.add (Nat.mod i n) (Nat.mod (Nat.div (Nat.div (Nat.div i n) n) n) n)) n
def detCode (n i : Nat) : Nat :=
  let a := Nat.mod i n; let i1 := Nat.div i n; let b := Nat.mod i1 n; let i2 := Nat.div i1 n
  let c := Nat.mod i2 n; let d := Nat.mod (Nat.div i2 n) n
  Nat.mod (Nat.add (Nat.sub n (Nat.mod (Nat.mul b c) n)) (Nat.mod (Nat.mul a d) n)) n

theorem trCode_encode (x : Mat2 n) : trCode n (encode x) = x.trace.val := by
  unfold trCode; rw [digit_a, digit_d]; rfl

theorem detCode_encode (x : Mat2 n) : detCode n (encode x) = x.det.val := by
  unfold detCode; dsimp only; rw [digit_a, digit_b, digit_c, digit_d]; rfl

/-- `p` holds at every code i < k of nonzero determinant, scanning downwards. -/
def allCodes (n : Nat) (p : Nat → Bool) : Nat → Bool
  | 0 => true
  | i + 1 => (Nat.beq (detCode n i) 0 || p i) && allCodes n p i

omit [NeZero n] in
theorem allCodes_lt {p : Nat → Bool} : ∀ k, allCodes n p k = true → ∀ i, i < k → Nat.beq (detCode n i) 0 = false → p i = true
  | 0, _, i, hi, _ => absurd hi (Nat.not_lt_zero i)
  | k + 1, h, i, hi, hd => by
    unfold allCodes at h
    have h1 := (Bool.and_eq_true _ _ |>.mp h).1
    have h2 := (Bool.and_eq_true _ _ |>.mp h).2
    rcases Nat.lt_or_eq_of_le (Nat.le_of_lt_succ hi) with hlt | rfl
    · exact allCodes_lt k h2 i hlt hd
    · rw [hd, Bool.false_or] at h1; exact h1

theorem allCodes_sound {p : Nat → Bool} (h : allCodes n p (n ^ 4) = true) : ∀ z ∈ gl n, p (encode z) = true := by
  intro z hz
  have hdet : z.det.val ≠ 0 := bne_iff_ne.mp (List.mem_filter.mp hz).2
  refine allCodes_lt _ h _ (encode_lt z) ?_
  cases hb : Nat.beq (detCode n (encode z)) 0
  · rfl
  · exact absurd (detCode_encode z ▸ Nat.eq_of_beq_eq_true hb) hdet

omit [NeZero n] in
theorem beq_val {a : Nat} {u : Fin n} (e : a = u.val) (v : Fin n) : Nat.beq a v.val = true ↔ u = v := by
  rw [Nat.beq_eq, e]; exact Fin.val_inj

omit [NeZero n] in
theorem or_of_not {b c : Bool} (h : (!b || c) = true) (hb : b = true) : c = true := by
  cases b
  · exact absurd hb Bool.false_ne_true
  · exact h

/-- Class A on codes: trace t_A, determinant d_A. -/
def classA (n : Nat) [NeZero n] (pr : PairCert) (i : Nat) : Bool :=
  Nat.beq (trCode n i) (finN pr.tA : Fin n).val && Nat.beq (detCode n i) (finN pr.dA : Fin n).val

/-- Class B on codes. -/
def classB (n : Nat) [NeZero n] (pr : PairCert) (i : Nat) : Bool :=
  Nat.beq (trCode n i) (finN pr.tB : Fin n).val &&
    Nat.beq (trCode n (mulNat n i i)) (finN pr.tB * finN pr.tB - 2 * finN pr.dB : Fin n).val

theorem classA_iff (pr : PairCert) (g : Mat2 n) : classA n pr (encode g) = true ↔ g.trace = finN pr.tA ∧ g.det = finN pr.dA := by
  unfold classA
  rw [Bool.and_eq_true, beq_val (trCode_encode g), beq_val (detCode_encode g)]

theorem classB_iff (pr : PairCert) (x : Mat2 n) : classB n pr (encode x) = true ↔ ClassB pr x := by
  unfold classB ClassB
  rw [Bool.and_eq_true, beq_val (trCode_encode x), mulNat_codes, beq_val (trCode_encode (M2.mul x x))]

-- ---------------------------------------------------------------- the certificate --

-- ---------------------------------------------------------------- the generating set --

/-- S = {E₁₂(1), T = [[1, 0], [1, ζ]]}: two generators, each with a specialised right multiplication on
codes (a handful of operations instead of the generic product). -/
def E12 : Mat2 n := ⟨1, 1, 0, 1⟩
def T (z : Nat) : Mat2 n := ⟨1, 0, 1, finN z⟩

/-- x · E₁₂(1) = [[a, a + b], [c, c + d]] on codes. -/
def mulE12 (n i : Nat) : Nat :=
  let a := Nat.mod i n; let i1 := Nat.div i n; let b := Nat.mod i1 n; let i2 := Nat.div i1 n
  let c := Nat.mod i2 n; let d := Nat.mod (Nat.div i2 n) n
  Nat.add a (Nat.mul n (Nat.add (Nat.mod (Nat.add a b) n) (Nat.mul n (Nat.add c (Nat.mul n (Nat.mod (Nat.add c d) n))))))

/-- x · T = [[a + b, ζb], [c + d, ζd]] on codes. -/
def mulT (n z i : Nat) : Nat :=
  let a := Nat.mod i n; let i1 := Nat.div i n; let b := Nat.mod i1 n; let i2 := Nat.div i1 n
  let c := Nat.mod i2 n; let d := Nat.mod (Nat.div i2 n) n
  Nat.add (Nat.mod (Nat.add a b) n) (Nat.mul n (Nat.add (Nat.mod (Nat.mul b (Nat.mod z n)) n)
    (Nat.mul n (Nat.add (Nat.mod (Nat.add c d) n) (Nat.mul n (Nat.mod (Nat.mul d (Nat.mod z n)) n))))))

theorem mulE12_codes (x : Mat2 n) : mulE12 n (encode x) = encode (M2.mul x E12) := by
  have h : M2.mul x E12 = ⟨x.a, x.a + x.b, x.c, x.c + x.d⟩ := by
    simp only [M2.mul, E12, (R).mul_one, (R).mul_zero, (R).add_zero]
  rw [h]; unfold mulE12; dsimp only; rw [digit_a, digit_b, digit_c, digit_d]; rfl

theorem mulT_codes (z : Nat) (x : Mat2 n) : mulT n z (encode x) = encode (M2.mul x (T z)) := by
  have h : M2.mul x (T z) = ⟨x.a + x.b, x.b * finN z, x.c + x.d, x.d * finN z⟩ := by
    simp only [M2.mul, T, (R).mul_one, (R).mul_zero, (R).zero_add]
  rw [h]; unfold mulT; dsimp only; rw [digit_a, digit_b, digit_c, digit_d]; rfl

/-- S is the claimed generating set and its closure covers every code of GL₂(ℤ/n). -/
def S_generates (n : Nat) [NeZero n] (z : Nat) (S : List Nat) : Bool :=
  S == [encode (E12 : Mat2 n), encode (T z : Mat2 n)] &&
    allCodes n (fun i => bit (closureList [mulE12 n, mulT n z] (n ^ 4) (mask 0 S) S) i) (n ^ 4)

def pairOk (n : Nat) [NeZero n] (S : List Nat) (pr : PairCert) : Bool :=
  pr.dA % n != 0 && pr.dB % n != 0 && encode (decode n pr.gRep) == pr.gRep &&
  allCodes n (fun i => !classA n pr i || pr.witnessesA.any fun w =>
    Nat.beq w.1 i && Nat.beq (mulNat n (mulNat n w.2.1 pr.gRep) w.2.2) i
      && Nat.beq (mulNat n w.2.1 w.2.2) (encode (M2.one : Mat2 n)) && Nat.beq (mulNat n w.2.2 w.2.1) (encode (M2.one : Mat2 n))) (n ^ 4) &&
  allCodes n (fun i => !classB n pr i || pr.wordsB.any fun e =>
    Nat.beq e.1 i && S.all fun s => e.2.any fun sw => Nat.beq sw.1 s && sw.2 != [] && Nat.beq (evalWord n pr.gRep e.1 sw.2) s) (n ^ 4)

theorem code_eq {i j : Nat} {m : Mat2 n} (e : Nat.beq (mulNat n i j) (encode m) = true) :
    M2.mul (decode n i) (decode n j) = m := by
  have := Nat.eq_of_beq_eq_true e
  rw [mulNat_eq] at this
  exact encode_inj this

set_option maxRecDepth 8192 in
/-- **Soundness of a certified pair.** -/
theorem pair_sound (ff : FieldFacts n) (z : Nat) (S : List Nat) (hS : S_generates n z S = true) (pr : PairCert) (hok : pairOk n S pr = true)
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
  obtain ⟨w, _, hw⟩ := List.any_eq_true.mp (or_of_not (allCodes_sound h3 g hgl) ((classA_iff pr g).mpr hA))
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
  have hB' : ClassB pr (M2.mul (M2.mul C' h) C) := ClassB_conj hCC' (ClassB_of_charpoly ff hB.1 hB.2)
  have hhgl : M2.mul (M2.mul C' h) C ∈ gl n := conj_mem_gl ff hCC' hC'C (mem_gl h (by rw [hB.2]; exact hdB))
  -- the words put S inside H′
  obtain ⟨e, _, he⟩ := List.any_eq_true.mp (or_of_not (allCodes_sound h4 _ hhgl) ((classB_iff pr _).mpr hB'))
  have he1 : e.1 = encode (M2.mul (M2.mul C' h) C) := Nat.eq_of_beq_eq_true (Bool.and_eq_true _ _ |>.mp he).1
  have hwords := (Bool.and_eq_true _ _ |>.mp he).2
  have hSH : ∀ s ∈ S, Codes H' s := by
    intro s hs
    obtain ⟨sw, _, hsw⟩ := List.any_eq_true.mp (List.all_eq_true.mp hwords s hs)
    have hne : sw.2 ≠ [] := bne_iff_ne.mp (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp hsw).1).2
    have hev : evalWord n pr.gRep e.1 sw.2 = s := Nat.eq_of_beq_eq_true (Bool.and_eq_true _ _ |>.mp hsw).2
    have hc := evalWord_codes H' hmul' ⟨decode n pr.gRep, hgRep', hgRep.symm⟩ ⟨_, hh', he1⟩ hne
    rw [hev] at hc
    exact hc
  unfold S_generates at hS
  have hSeq : S = [encode (E12 : Mat2 n), encode (T z : Mat2 n)] := beq_iff_eq.mp (Bool.and_eq_true _ _ |>.mp hS).1
  have hall := (Bool.and_eq_true _ _ |>.mp hS).2
  have hmem : ∀ s : Mat2 n, encode s ∈ S → s ∈ H' := fun s hs => by
    obtain ⟨t, ht, e⟩ := hSH _ hs
    exact encode_inj e ▸ ht
  have hE : E12 ∈ H' := hmem _ (hSeq ▸ List.mem_cons_self ..)
  have hT : T z ∈ H' := hmem _ (hSeq ▸ List.mem_cons_of_mem _ (List.mem_cons_self ..))
  have hm : ∀ y ∈ H', ∀ f ∈ [mulE12 n, mulT n z], ∃ w ∈ H', f (encode y) = encode w := by
    intro y hy f hf
    rcases List.mem_cons.mp hf with rfl | hf
    · exact ⟨M2.mul y E12, hmul' y hy _ hE, mulE12_codes y⟩
    rcases List.mem_cons.mp hf with rfl | hf
    · exact ⟨M2.mul y (T z), hmul' y hy _ hT, mulT_codes z y⟩
    exact absurd hf List.not_mem_nil
  -- conjugate back
  intro w hw
  have hw' := conj_mem_gl ff hCC' hC'C hw
  have hbit := allCodes_sound hall _ hw'
  rw [bit_eq] at hbit
  obtain ⟨y, hy, e⟩ := List.mem_map.mp (closureList_mem H' _ hm S hSH (n ^ 4) _ hbit)
  have h2 : M2.mul (M2.mul C (M2.mul (M2.mul C' w) C)) C' = M2.mul (M2.mul C (M2.mul (M2.mul C' y) C)) C' := by
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
theorem data_sound (ff : FieldFacts n) (d : ModLData) (hS : S_generates n d.zeta d.S = true)
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
    refine pair_sound ff d.zeta d.S hS pr (List.all_eq_true.mp hpairs pr hprm) H hmul hg hh ⟨?_, ?_⟩ ⟨?_, ?_⟩
    · rw [hA.1, e1]
    · rw [hA.2, ← e2, hmod]
    · rw [hB.1, e3]
    · rw [hB.2, ← e4, hmod]
  · exact absurd hok Bool.false_ne_true

-- ---------------------------------------------------------------- inverses on codes --

/-- The inverse on codes: adjugate over det⁻¹ = det^(n−2) (Fermat; a kernel check confirms it on the
codes of GL₂, and only that check is used). -/
def invCode (n i : Nat) : Nat :=
  let a := Nat.mod i n; let i1 := Nat.div i n; let b := Nat.mod i1 n; let i2 := Nat.div i1 n
  let c := Nat.mod i2 n; let d := Nat.mod (Nat.div i2 n) n
  let u := Nat.mod (Nat.pow (detCode n i) (Nat.sub n 2)) n
  Nat.add (Nat.mod (Nat.mul u d) n) (Nat.mul n (Nat.add (Nat.mod (Nat.mul u (Nat.sub n b)) n)
    (Nat.mul n (Nat.add (Nat.mod (Nat.mul u (Nat.sub n c)) n) (Nat.mul n (Nat.mod (Nat.mul u a) n))))))

def invOk (n : Nat) [NeZero n] : Bool :=
  allCodes n (fun i => Nat.beq (mulNat n (invCode n i) i) (encode (M2.one : Mat2 n))) (n ^ 4)

theorem inv_of_invOk (h : invOk n = true) : ∀ z ∈ gl n, ∃ z' : Mat2 n, M2.mul z' z = M2.one := by
  intro z hz
  refine ⟨decode n (invCode n (encode z)), ?_⟩
  have e := Nat.eq_of_beq_eq_true (allCodes_sound h z hz)
  rw [mulNat_eq] at e
  simp only [mulIdx, decode_encode] at e
  exact encode_inj e

/-- The negation facts about ℤ/n that the vector argument needs (n² cases each, decided per n). -/
structure NegFacts (n : Nat) [NeZero n] : Prop where
  mul_neg : ∀ b c : Fin n, b * (0 - c) = 0 - b * c
  sub_eq : ∀ x y : Fin n, x - y = x + (0 - y)
  neg_eq_zero : ∀ c : Fin n, 0 - c = 0 → c = 0
  one_ne_zero : (1 : Fin n) ≠ 0

/-- A singular matrix kills (d, −c) and (−b, a): from `NegFacts` and the semiring laws, no n⁴-case decide. -/
theorem kernel_vectors_of (nf : NegFacts n) : ∀ a b c d : Fin n, a * d - b * c = 0 →
    applyV ⟨a, b, c, d⟩ (d, 0 - c) = (0, 0) ∧ applyV ⟨a, b, c, d⟩ (0 - b, a) = (0, 0) := by
  intro a b c d h
  simp only [applyV]
  rw [nf.mul_neg, nf.mul_neg, nf.mul_neg, nf.mul_neg, ← nf.sub_eq, ← nf.sub_eq, h,
    (R).mul_comm d c, Fin.sub_self, (R).add_comm (0 - a * b), (R).add_comm (0 - c * b), ← nf.sub_eq, ← nf.sub_eq,
    (R).mul_comm b a, Fin.sub_self, (R).mul_comm d a, (R).mul_comm c b, h]
  exact ⟨rfl, rfl⟩

/-- `FieldFacts n` from Cayley–Hamilton for tr², the negation facts, and the kernel check of inverses. -/
theorem FieldFacts.of (hsq : ∀ a b c d : Fin n, (a * a + b * c) + (c * b + d * d) = (a + d) * (a + d) - 2 * (a * d - b * c))
    (nf : NegFacts n) (hinv : invOk n = true) : FieldFacts n where
  trace_sq := fun x => by obtain ⟨a, b, c, d⟩ := x; exact hsq a b c d
  kernel_vectors := kernel_vectors_of nf
  neg_eq_zero := nf.neg_eq_zero
  one_ne_zero := nf.one_ne_zero
  inv := inv_of_invOk hinv

/-- Cayley–Hamilton for the trace of the square, over ℤ/n for a literal n: expand with the semiring laws,
name the four products, and let `omega` settle the additive identity in ℤ/n. -/
macro "trace_sq_tac" : tactic => `(tactic| (
  intro a b c d
  rw [(isCSR_fin _).mul_add, (isCSR_fin _).add_mul, (isCSR_fin _).add_mul, (isCSR_fin _).mul_comm d a, (isCSR_fin _).mul_comm c b]
  generalize a * a = P
  generalize a * d = T
  generalize d * d = U
  generalize b * c = Q
  omega))

end Mat2

end Oracles
