import LanglandsOracles.ImageMod2
import LanglandsOracles.Data

/-!
# The image of ρ̄₅ of 37a1 is all of GL₂(𝔽₅): a generation certificate on multiplication tables.

GL₂(𝔽₅) has 480 elements, too many for closures on `Fin`-arithmetic products in the kernel.  Here
matrix products are computed on base-5 codes by machine-natural arithmetic (`mulNat`, proved equal
to the `Fin` product `mulIdx`), and for each generator candidate g one *column* is built: a natural
whose base-1024 digit x is the code of x·g for every code x < 5⁴ (`column`), verified digit by digit
against `mulNat` (`colOk`, kernel).  Closures then cost one digit extraction per product.

Frobenius input (point counts of the Weierstrass model, Lean's own `apGeneral`): a₂ ≡ 3 and a₃ ≡ 2
mod 5 for 37a1, so ρ̄₅(Frob₂) has characteristic polynomial x² − 3x + 2 = (x − 1)(x − 2) (split
semisimple, 30 conjugates) and ρ̄₅(Frob₃) has x² − 2x + 3 (irreducible, 20 conjugates); neither
class contains a scalar.  `pairs_generate5` (kernel): every pair (g, h) from these two classes
generates GL₂(𝔽₅).  Only the 20 pairs (gRep, h) with gRep a fixed representative of the split class
are closed in the kernel; the other 29 representatives are reduced to it by a *proved* conjugation
argument (`generated_by_classA_classB`), using exported conjugators C with C·gRep·C⁻¹ = g (verified
by kernel) and the fact that conjugation by a unit preserves the enumerated GL₂(𝔽₅), itself proved
without determinant multiplicativity: a matrix with a left inverse cannot kill a nonzero vector
(`det_ne_zero_of_left_inverse`).  Hence (`mod5_image_37a1_full`) any
multiplicatively closed subset of GL₂(𝔽₅) containing elements with these two characteristic
polynomials is all of GL₂(𝔽₅), and the image of ρ̄₅ is full, with "ρ̄₅(Frob_p) has characteristic
polynomial x² − a_p x + p" (Eichler–Shimura) as the only imported input.
-/
namespace Oracles

namespace Mat2

/-- Raw product of base-n encoded matrices, mirroring `Fin` arithmetic digit by digit. -/
def mulNat (n i j : Nat) : Nat :=
  let a := i % n; let b := i / n % n; let c := i / n / n % n; let d := i / n / n / n % n
  let a' := j % n; let b' := j / n % n; let c' := j / n / n % n; let d' := j / n / n / n % n
  ((a * a' % n + b * c' % n) % n) + n * (((a * b' % n + b * d' % n) % n)
    + n * (((c * a' % n + d * c' % n) % n) + n * ((c * b' % n + d * d' % n) % n)))

theorem mulNat_eq (n : Nat) [NeZero n] (i j : Nat) : mulNat n i j = mulIdx n i j := by
  simp only [mulNat, mulIdx, encode, decode, M2.mul, finN, Fin.val_add, Fin.val_mul]

/-- The column of g: digit x (base 1024) is the code of x·g, for every code x < n⁴. -/
def column (n g : Nat) : Nat := (List.range (n ^ 4)).foldl (fun acc x => acc + mulNat n x g * 1024 ^ x) 0

def colGet (col x : Nat) : Nat := col / 1024 ^ x % 1024

/-- Digit-by-digit verification of a column against the raw product. -/
def colOk (n g col : Nat) : Bool := (List.range (n ^ 4)).all fun x => colGet col x == mulNat n x g

theorem colOk_get {n g col : Nat} (h : colOk n g col = true) {x : Nat} (hx : x < n ^ 4) :
    colGet col x = mulNat n x g :=
  beq_iff_eq.mp (List.all_eq_true.mp h x (List.mem_range.mpr hx))

/-- Closure of the codes `init` under multiplication by the generators whose columns are `cols`. -/
def closureCols (n : Nat) (cols init : List Nat) : Nat :=
  closureIdx (fun i c => colGet c i) cols (n ^ 4) (mask 0 init) init

/-- The generic column certificate: closed H, a column verified for each generator, generators in H. -/
theorem closureCols_mem {n : Nat} [NeZero n] (H : List (Mat2 n)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H)
    (gs : List (Nat × Nat)) (hok : ∀ p ∈ gs, colOk n p.1 p.2 = true) (hgs : ∀ p ∈ gs, Codes H p.1) :
    ∀ x : Mat2 n, (closureCols n (gs.map (·.2)) (gs.map (·.1))).testBit (encode x) = true → x ∈ H := by
  have hinit : ∀ i ∈ gs.map (·.1), Codes H i := by
    intro i hi
    obtain ⟨p, hp, rfl⟩ := List.mem_map.mp hi
    exact hgs p hp
  have hm : ∀ y ∈ H, ∀ c ∈ gs.map (·.2), ∃ z ∈ H, colGet c (encode y) = encode z := by
    intro y hy c hc
    obtain ⟨p, hp, rfl⟩ := List.mem_map.mp hc
    obtain ⟨w, hw, hpw⟩ := hgs p hp
    refine ⟨M2.mul y w, hmul y hy w hw, ?_⟩
    rw [colOk_get (hok p hp) (encode_lt y), mulNat_eq, hpw]
    simp only [mulIdx, decode_encode]
  exact closureIdx_mem H (fun i c => colGet c i) _ hm _ hinit _

-- ------------------------------------------------------------------- 37a1 mod 5 --

/-- Characteristic polynomial x² − 3x + 2 = (x − 1)(x − 2): the class of ρ̄₅(Frob₂) (30 conjugates). -/
def classA (x : Mat2 5) : Bool := x.trace == 3 && x.det == 2
/-- Characteristic polynomial x² − 2x + 3, irreducible over 𝔽₅: the class of ρ̄₅(Frob₃) (20 conjugates). -/
def classB (x : Mat2 5) : Bool := x.trace == 2 && x.det == 3
/-- The same class through traces only: tr = 2 and tr(h²) = tr² − 2·det = 3 (Cayley–Hamilton); this
form is visibly conjugation-invariant. -/
def classB' (x : Mat2 5) : Bool := x.trace == 2 && (M2.mul x x).trace == 3

theorem trace_sq (x : Mat2 5) : (M2.mul x x).trace = x.trace * x.trace - 2 * x.det := by
  obtain ⟨a, b, c, d⟩ := x
  have key : ∀ a b c d : Fin 5, (a * a + b * c) + (c * b + d * d) = (a + d) * (a + d) - 2 * (a * d - b * c) := by decide
  exact key a b c d

theorem classB'_of_classB {h : Mat2 5} (hB : classB h = true) : classB' h = true := by
  have ht : h.trace = 2 := beq_iff_eq.mp (Bool.and_eq_true _ _ |>.mp hB).1
  have hd : h.det = 3 := beq_iff_eq.mp (Bool.and_eq_true _ _ |>.mp hB).2
  unfold classB'
  rw [trace_sq, ht, hd]
  decide

theorem mem_gl_of_classB' {g : Mat2 5} (hg : classB' g = true) : g ∈ gl 5 := by
  have ht : g.trace = 2 := beq_iff_eq.mp (Bool.and_eq_true _ _ |>.mp hg).1
  have hs : (M2.mul g g).trace = 3 := beq_iff_eq.mp (Bool.and_eq_true _ _ |>.mp hg).2
  rw [trace_sq, ht] at hs
  have hd : g.det = 3 := by
    have : ∀ d : Fin 5, 2 * 2 - 2 * d = 3 → d = 3 := by decide
    exact this _ hs
  exact mem_gl g (by rw [hd]; decide)

-- ---- group algebra in M₂(𝔽₅): associativity, units and conjugation ----

local notation "R5" => isCSR_fin 5

theorem mul_inv_cancel_left5 {C C' : Mat2 5} (h : M2.mul C C' = M2.one) (t : Mat2 5) :
    M2.mul C (M2.mul C' t) = t := by
  rw [← M2.mul_assoc R5, h, M2.one_mul R5]

/-- (C′ x C)(C′ y C) = C′ (x y) C when C C′ = 1. -/
theorem conj_mul5 {C C' : Mat2 5} (h : M2.mul C C' = M2.one) (x y : Mat2 5) :
    M2.mul (M2.mul (M2.mul C' x) C) (M2.mul (M2.mul C' y) C) = M2.mul (M2.mul C' (M2.mul x y)) C := by
  simp only [M2.mul_assoc R5, mul_inv_cancel_left5 h]

/-- C′ (C g C′) C = g when C′ C = 1. -/
theorem conj_conj5 {C C' : Mat2 5} (h : M2.mul C' C = M2.one) (g : Mat2 5) :
    M2.mul (M2.mul C' (M2.mul (M2.mul C g) C')) C = g := by
  simp only [M2.mul_assoc R5, mul_inv_cancel_left5 h]
  rw [h, M2.mul_one R5]

/-- C (C′ z C) C′ = z when C C′ = 1. -/
theorem conj_cancel5 {C C' : Mat2 5} (h : M2.mul C C' = M2.one) (z : Mat2 5) :
    M2.mul (M2.mul C (M2.mul (M2.mul C' z) C)) C' = z := by
  simp only [M2.mul_assoc R5, mul_inv_cancel_left5 h]
  rw [h, M2.mul_one R5]

theorem trace_conj5 {C C' : Mat2 5} (h : M2.mul C C' = M2.one) (x : Mat2 5) :
    (M2.mul (M2.mul C' x) C).trace = x.trace := by
  rw [M2.trace_mul_comm R5, ← M2.mul_assoc R5, h, M2.one_mul R5]

theorem classB'_conj {C C' : Mat2 5} (h : M2.mul C C' = M2.one) {x : Mat2 5} (hx : classB' x = true) :
    classB' (M2.mul (M2.mul C' x) C) = true := by
  unfold classB' at hx ⊢
  rw [conj_mul5 h, trace_conj5 h, trace_conj5 h]
  exact hx

-- ---- invertibility is preserved by conjugation: a left inverse forces det ≠ 0 ----

def apply5 (w : Mat2 5) (v : Fin 5 × Fin 5) : Fin 5 × Fin 5 := (w.a * v.1 + w.b * v.2, w.c * v.1 + w.d * v.2)

def nonzeroVecs : List (Fin 5 × Fin 5) := (List.range 5).flatMap fun i => (List.range 5).filterMap fun j =>
  if i = 0 ∧ j = 0 then none else some (⟨i % 5, Nat.mod_lt _ (by decide)⟩, ⟨j % 5, Nat.mod_lt _ (by decide)⟩)

theorem apply_mul5 (w w' : Mat2 5) (v : Fin 5 × Fin 5) : apply5 (M2.mul w w') v = apply5 w (apply5 w' v) := by
  haveI : Std.Associative (α := Fin 5) (· + ·) := ⟨(R5).add_assoc⟩
  haveI : Std.Commutative (α := Fin 5) (· + ·) := ⟨(R5).add_comm⟩
  simp only [apply5, M2.mul, (R5).add_mul, (R5).mul_add, (R5).mul_assoc, Prod.mk.injEq]
  exact ⟨by ac_rfl, by ac_rfl⟩

theorem apply_one5 (v : Fin 5 × Fin 5) : apply5 M2.one v = v := by
  obtain ⟨v1, v2⟩ := v
  simp only [apply5, M2.one, (R5).one_mul, (R5).zero_mul, (R5).add_zero, (R5).zero_add]

theorem apply_zero5 (w : Mat2 5) : apply5 w (0, 0) = (0, 0) := by
  simp only [apply5, (R5).mul_zero, (R5).add_zero]

/-- A singular 2×2 matrix over 𝔽₅ kills a nonzero vector (decided over the 625 matrices). -/
theorem singular_kernel :
    ∀ a b c d : Fin 5, a * d - b * c = 0 →
      nonzeroVecs.any (fun v => apply5 ⟨a, b, c, d⟩ v == (0, 0)) = true := by decide

theorem nonzeroVecs_ne : nonzeroVecs.all (fun v => v != (0, 0)) = true := by decide

theorem det_ne_zero_of_left_inverse (w w' : Mat2 5) (h : M2.mul w' w = M2.one) : w.det.val ≠ 0 := by
  intro hz
  obtain ⟨a, b, c, d⟩ := w
  have hd : a * d - b * c = 0 := Fin.ext hz
  obtain ⟨v, hv, hwv⟩ := List.any_eq_true.mp (singular_kernel a b c d hd)
  have hne := bne_iff_ne.mp (List.all_eq_true.mp nonzeroVecs_ne v hv)
  have e : apply5 (M2.mul w' ⟨a, b, c, d⟩) v = v := by rw [h, apply_one5]
  rw [apply_mul5, beq_iff_eq.mp hwv, apply_zero5] at e
  exact hne e.symm

/-- Every element of the enumerated GL₂(𝔽₅) has a two-sided inverse in it (adjugate over det⁻¹), kernel. -/
def inv5 (x : Mat2 5) : Mat2 5 :=
  let u : Fin 5 := match x.det with | 1 => 1 | 2 => 3 | 3 => 2 | 4 => 4 | _ => 0
  ⟨u * x.d, u * (0 - x.b), u * (0 - x.c), u * x.a⟩

theorem inv_all5 : (gl 5).all (fun z => M2.mul (inv5 z) z == M2.one) = true := by decide +kernel

/-- Conjugation by a unit preserves GL₂(𝔽₅) (as the enumerated list). -/
theorem conj_mem_gl5 {C C' : Mat2 5} (hCC' : M2.mul C C' = M2.one) (hC'C : M2.mul C' C = M2.one)
    {z : Mat2 5} (hz : z ∈ gl 5) : M2.mul (M2.mul C' z) C ∈ gl 5 := by
  have hz' : M2.mul (inv5 z) z = M2.one := beq_iff_eq.mp (List.all_eq_true.mp inv_all5 z hz)
  refine mem_gl _ (det_ne_zero_of_left_inverse _ (M2.mul (M2.mul C' (inv5 z)) C) ?_)
  rw [conj_mul5 hCC', hz', M2.mul_one R5, hC'C]

-- ---- the certificate: one representative of classA against the whole classB ----

def glIdx5 : List Nat := (gl 5).map encode
def gRep : Mat2 5 := decode 5 mod5GRep
def colsB : List (Nat × Nat) := ((gl 5).filter classB').map fun h => (encode h, column 5 (encode h))
def colRep : Nat := column 5 (encode gRep)

theorem mem_glIdx5 {x : Mat2 5} (hx : x ∈ gl 5) : encode x ∈ glIdx5 := List.mem_map_of_mem hx
theorem mem_colsB {h : Mat2 5} (hh : h ∈ (gl 5).filter classB') : (encode h, column 5 (encode h)) ∈ colsB :=
  List.mem_map_of_mem hh

theorem gRep_classA : classA gRep = true := by decide +kernel
theorem colsB_length : colsB.length = 20 := by decide +kernel
theorem colsB_ok : colsB.all (fun p => colOk 5 p.1 p.2) = true := by decide +kernel
theorem colRep_ok : colOk 5 (encode gRep) colRep = true := by decide +kernel

/-- The exported conjugators: every g in classA is C·gRep·C⁻¹ with C, C⁻¹ mutually inverse (kernel). -/
theorem witnesses_ok :
    ((gl 5).filter classA).all (fun g => mod5Witnesses.any fun w =>
      w.1 == encode g && mulNat 5 (mulNat 5 w.2.1 (encode gRep)) w.2.2 == encode g
        && mulNat 5 w.2.1 w.2.2 == encode (M2.one : Mat2 5) && mulNat 5 w.2.2 w.2.1 == encode (M2.one : Mat2 5)) = true := by
  decide +kernel

/-- gRep together with any element of classB generates GL₂(𝔽₅): 20 closures on column lookups, kernel. -/
theorem pairs_generate5 :
    colsB.all (fun q => glIdx5.all fun x => (closureCols 5 [colRep, q.2] [encode gRep, q.1]).testBit x) = true := by
  decide +kernel

set_option maxRecDepth 8192 in
/-- A multiplicatively closed subset of GL₂(𝔽₅) containing an element with characteristic polynomial
x² − 3x + 2 and one with x² − 2x + 3 is all of GL₂(𝔽₅). -/
theorem generated_by_classA_classB (H : List (Mat2 5)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H)
    {g h : Mat2 5} (hg : g ∈ H) (hh : h ∈ H) (hA : classA g = true) (hB : classB h = true) :
    ∀ z ∈ gl 5, z ∈ H := by
  -- the conjugator C with C gRep C′ = g
  have hgA : g ∈ (gl 5).filter classA := List.mem_filter.mpr ⟨mem_gl g (by
    have hd : g.det = 2 := beq_iff_eq.mp (Bool.and_eq_true _ _ |>.mp hA).2
    rw [hd]; decide), hA⟩
  obtain ⟨w, _, hw⟩ := List.any_eq_true.mp (List.all_eq_true.mp witnesses_ok g hgA)
  have hw1 := (Bool.and_eq_true _ _ |>.mp hw).1
  have hw4 := (Bool.and_eq_true _ _ |>.mp hw).2
  have hw2 := (Bool.and_eq_true _ _ |>.mp (Bool.and_eq_true _ _ |>.mp hw1).1).2
  have hw3 := (Bool.and_eq_true _ _ |>.mp hw1).2
  have code_eq : ∀ {i j : Nat} {m : Mat2 5}, (mulNat 5 i j == encode m) = true → M2.mul (decode 5 i) (decode 5 j) = m := by
    intro i j m e
    have := beq_iff_eq.mp e
    rw [mulNat_eq] at this
    exact encode_inj this
  have hCg : M2.mul (M2.mul (decode 5 w.2.1) gRep) (decode 5 w.2.2) = g := by
    have := code_eq hw2
    rw [mulNat_eq] at this
    simp only [mulIdx, decode_encode] at this
    exact this
  have hCC' : M2.mul (decode 5 w.2.1) (decode 5 w.2.2) = M2.one := code_eq hw3
  have hC'C : M2.mul (decode 5 w.2.2) (decode 5 w.2.1) = M2.one := code_eq hw4
  generalize decode 5 w.2.1 = C at hCg hCC' hC'C
  generalize decode 5 w.2.2 = C' at hCg hCC' hC'C
  -- conjugate H
  let H' := H.map fun x => M2.mul (M2.mul C' x) C
  have hmul' : ∀ x ∈ H', ∀ y ∈ H', M2.mul x y ∈ H' := by
    intro x hx y hy
    obtain ⟨x0, hx0, rfl⟩ := List.mem_map.mp hx
    obtain ⟨y0, hy0, rfl⟩ := List.mem_map.mp hy
    exact List.mem_map.mpr ⟨M2.mul x0 y0, hmul x0 hx0 y0 hy0, (conj_mul5 hCC' x0 y0).symm⟩
  have hgRep : gRep ∈ H' := List.mem_map.mpr ⟨g, hg, by rw [← hCg, conj_conj5 hC'C]⟩
  have hh' : M2.mul (M2.mul C' h) C ∈ H' := List.mem_map.mpr ⟨h, hh, rfl⟩
  have hB' : classB' (M2.mul (M2.mul C' h) C) = true := classB'_conj hCC' (classB'_of_classB hB)
  -- the certificate for (gRep, C′ h C)
  have hq : (encode (M2.mul (M2.mul C' h) C), column 5 (encode (M2.mul (M2.mul C' h) C))) ∈ colsB :=
    mem_colsB (List.mem_filter.mpr ⟨mem_gl_of_classB' hB', hB'⟩)
  have hclos := List.all_eq_true.mp (List.all_eq_true.mp pairs_generate5 _ hq)
  have hok : ∀ p ∈ [(encode gRep, colRep), (encode (M2.mul (M2.mul C' h) C), column 5 (encode (M2.mul (M2.mul C' h) C)))],
      colOk 5 p.1 p.2 = true := by
    intro p hp
    rcases List.mem_cons.mp hp with rfl | hp
    · exact colRep_ok
    rcases List.mem_cons.mp hp with rfl | hp
    · exact List.all_eq_true.mp colsB_ok _ hq
    exact absurd hp List.not_mem_nil
  have hgs : ∀ p ∈ [(encode gRep, colRep), (encode (M2.mul (M2.mul C' h) C), column 5 (encode (M2.mul (M2.mul C' h) C)))],
      Codes H' p.1 := by
    intro p hp
    rcases List.mem_cons.mp hp with rfl | hp
    · exact ⟨gRep, hgRep, rfl⟩
    rcases List.mem_cons.mp hp with rfl | hp
    · exact ⟨_, hh', rfl⟩
    exact absurd hp List.not_mem_nil
  have hmem := closureCols_mem H' hmul' _ hok hgs
  -- conjugate back
  intro z hz
  have hz' := conj_mem_gl5 hCC' hC'C hz
  have hbit := hclos _ (mem_glIdx5 hz')
  obtain ⟨y, hy, e⟩ := List.mem_map.mp (hmem _ hbit)
  have h2 : M2.mul (M2.mul C (M2.mul (M2.mul C' z) C)) C' = M2.mul (M2.mul C (M2.mul (M2.mul C' y) C)) C' := by
    rw [e]
  rw [conj_cancel5 hCC', conj_cancel5 hCC'] at h2
  exact h2 ▸ hy

end Mat2

/-- 37a1: a₂ ≡ 3 and a₃ ≡ 2 (mod 5), from Lean's point counts on the Weierstrass model [0, 0, 1, −1, 0];
so ρ̄₅(Frob₂) ∈ classA and ρ̄₅(Frob₃) ∈ classB. -/
theorem frob_classes5_37a1 :
    ((apGeneral [0, 0, 1, -1, 0] 2 % 5 + 5) % 5 == 3) && ((apGeneral [0, 0, 1, -1, 0] 3 % 5 + 5) % 5 == 2) = true := by
  decide +kernel

/-- **ρ̄_{37a1,5} is surjective.**  The image is a multiplicatively closed subset of GL₂(𝔽₅) containing
ρ̄₅(Frob₂), of characteristic polynomial x² − a₂x + 2 = x² − 3x + 2, and ρ̄₅(Frob₃), of characteristic
polynomial x² − a₃x + 3 = x² − 2x + 3 (`frob_classes5_37a1`); by `generated_by_classA_classB` it is all
of GL₂(𝔽₅). -/
theorem mod5_image_37a1_full (H : List (Mat2 5)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H)
    {g h : Mat2 5} (hg : g ∈ H) (hh : h ∈ H)
    (hA : g.trace = 3 ∧ g.det = 2) (hB : h.trace = 2 ∧ h.det = 3) : ∀ z ∈ Mat2.gl 5, z ∈ H :=
  Mat2.generated_by_classA_classB H hmul hg hh
    (by unfold Mat2.classA; rw [hA.1, hA.2]; decide) (by unfold Mat2.classB; rw [hB.1, hB.2]; decide)

end Oracles
