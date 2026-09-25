import LanglandsOracles.Pseudocharacter
import LanglandsOracles.Data

/-!
# The image of ρ̄_{37a1,3} is all of GL₂(𝔽₃): a generation certificate.

The exported Frobenius matrices (`galoisMod3Data`, computed by Python on a basis of 37a1[3] over
𝔽_{p^k}) are ρ̄(Frob_p) up to a choice of basis, i.e. up to conjugacy in GL₂(𝔽₃).  The invariants
(trace, det, scalar?) are conjugation-invariant, and

  ρ̄(Frob_5) has (tr, det) = (1, 2): order 8  (charpoly x² − x − 1, irreducible over 𝔽₃);
  ρ̄(Frob_7) has (tr, det) = (2, 1), non-scalar: unipotent, order 3.

`pairs_generate` (kernel): for *every* g of order 8 and *every* non-scalar unipotent h in GL₂(𝔽₃),
the multiplicative closure of {g, h} is all 48 elements (96 pairs, breadth-first closure on
base-3 indices with a bitmask of seen elements).
Hence any multiplicatively closed subset of GL₂(𝔽₃) meeting both classes is the whole group
(`generated_by_ord8_unip`), and the image of ρ̄_{37a1,3} is full (`mod3_image_37a1_full`) — the
classical fact that 37a1 has surjective mod-3 representation, here as a kernel-checked certificate
with the Frobenius classes as the only imported input.  Since Gal(ℚ(E[3])/ℚ) ≅ GL₂(𝔽₃), the mod-3
excursion data of 37a1 are `ExcursionData.ofHom` of an isomorphism, and `gl2_Fp_pseudocharacter`
(p = 3) applies with χ(Frob_p) = a_p mod 3.
-/
namespace Oracles

namespace Mat2

/-- Elements enumerated by `gl n` are exactly the matrices with nonzero determinant. -/
theorem mem_fins {n : Nat} (a : Fin n) : a ∈ fins n := by
  unfold fins
  rw [List.mem_filterMap]
  exact ⟨a.val, List.mem_range.mpr a.isLt, by simp [a.isLt]⟩

theorem mem_all {n : Nat} (x : Mat2 n) : x ∈ all n := by
  unfold all
  simp only [List.mem_flatMap, List.mem_map]
  exact ⟨x.a, mem_fins _, x.b, mem_fins _, x.c, mem_fins _, x.d, mem_fins _, rfl⟩

theorem mem_gl {n : Nat} (x : Mat2 n) (hx : x.det.val ≠ 0) : x ∈ gl n := by
  unfold gl
  rw [List.mem_filter]
  exact ⟨mem_all x, bne_iff_ne.mpr hx⟩

/-- Conjugation invariants: (trace, det, is scalar 1). -/
def invariants (x : Mat2 3) : Fin 3 × Fin 3 × Bool := (x.trace, x.det, x == M2.one)

/-- Order 8: det = −1 and trace = ±1 (charpoly x² ∓ x − 1, irreducible; eigenvalues primitive 8th roots). -/
def ord8 (x : Mat2 3) : Bool := decide (invariants x = (1, 2, false)) || decide (invariants x = (2, 2, false))

/-- Non-scalar unipotent: charpoly (x − 1)², x ≠ 1; order 3. -/
def unip (x : Mat2 3) : Bool := decide (invariants x = (2, 1, false))

theorem mem_gl_of_ord8 {g : Mat2 3} (hg : ord8 g = true) : g ∈ gl 3 := by
  unfold ord8 at hg
  rcases Bool.or_eq_true _ _ |>.mp hg with h | h <;>
  · have h' := of_decide_eq_true h
    have hd : g.det = 2 := (Prod.ext_iff.mp (Prod.ext_iff.mp h').2).1
    exact mem_gl g (by rw [hd]; decide)

theorem mem_gl_of_unip {g : Mat2 3} (hg : unip g = true) : g ∈ gl 3 := by
  have h' := of_decide_eq_true hg
  have hd : g.det = 1 := (Prod.ext_iff.mp (Prod.ext_iff.mp h').2).1
  exact mem_gl g (by rw [hd]; decide)

/-- Matrices as indices 0 ≤ i < 81 (base 3), so that closures run on machine naturals in the kernel. -/
def fin3 (k : Nat) : Fin 3 := ⟨k % 3, Nat.mod_lt k (by decide)⟩
def encode (x : Mat2 3) : Nat := x.a.val + 3 * (x.b.val + 3 * (x.c.val + 3 * x.d.val))
def decode (i : Nat) : Mat2 3 := ⟨fin3 i, fin3 (i / 3), fin3 (i / 3 / 3), fin3 (i / 3 / 3 / 3)⟩
def mulIdx (i j : Nat) : Nat := encode (M2.mul (decode i) (decode j))

theorem decode_encode (x : Mat2 3) : decode (encode x) = x := by
  obtain ⟨⟨a, ha⟩, ⟨b, hb⟩, ⟨c, hc⟩, ⟨d, hd⟩⟩ := x
  have h1 : ∀ u k : Nat, u < 3 → (u + 3 * k) % 3 = u := fun u k hu => by
    rw [Nat.add_mul_mod_self_left, Nat.mod_eq_of_lt hu]
  have h2 : ∀ u k : Nat, u < 3 → (u + 3 * k) / 3 = k := fun u k hu => by
    rw [Nat.add_mul_div_left _ _ (by decide : 0 < 3), Nat.div_eq_of_lt hu, Nat.zero_add]
  simp only [decode, encode, fin3, M2.mk.injEq, Fin.mk.injEq]
  rw [h1 a _ ha, h2 a _ ha, h1 b _ hb, h2 b _ hb, h1 c _ hc, h2 c _ hc, Nat.mod_eq_of_lt hd]
  exact ⟨rfl, rfl, rfl, rfl⟩

/-- Bitmask of a list of indices. -/
def mask (m : Nat) (l : List Nat) : Nat := l.foldl (fun m j => m ||| 2 ^ j) m

theorem testBit_mask {m : Nat} {l : List Nat} {i : Nat} (h : (mask m l).testBit i = true) :
    m.testBit i = true ∨ i ∈ l := by
  induction l generalizing m with
  | nil => exact Or.inl h
  | cons j l ih =>
    rcases ih h with h' | h'
    · rw [Nat.testBit_or] at h'
      rcases Bool.or_eq_true _ _ |>.mp h' with h'' | h''
      · exact Or.inl h''
      · rw [Nat.testBit_two_pow] at h''
        exact Or.inr (List.mem_cons.mpr (Or.inl (of_decide_eq_true h'').symm))
    · exact Or.inr (List.mem_cons_of_mem _ h')

/-- Products of the frontier with the generators that are not yet seen. -/
def stepIdx (gens : List Nat) (seen : Nat) (frontier : List Nat) : List Nat :=
  (frontier.flatMap fun i => gens.map fun g => mulIdx i g).filter fun j => !seen.testBit j

/-- Breadth-first multiplicative closure, with fuel; `seen` is a bitmask. -/
def closureIdx (gens : List Nat) : Nat → Nat → List Nat → Nat
  | 0, seen, _ => seen
  | n + 1, seen, frontier =>
    match stepIdx gens seen frontier with
    | [] => seen
    | y :: ys => closureIdx gens n (mask seen (y :: ys)) (y :: ys)

/-- The semigroup generated by a list (its closure under multiplication; in a finite group, the subgroup). -/
def generatedIdx (gens : List Nat) : Nat := closureIdx gens 48 (mask 0 gens) gens

section soundness

variable (H : List (Mat2 3)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H)
include hmul

theorem stepIdx_sub (gens : List Nat) (seen : Nat) (frontier : List Nat)
    (hg : ∀ g ∈ gens, decode g ∈ H) (hf : ∀ i ∈ frontier, decode i ∈ H) :
    ∀ j ∈ stepIdx gens seen frontier, decode j ∈ H := by
  intro j hj
  unfold stepIdx at hj
  obtain ⟨i, hi, hj'⟩ := List.mem_flatMap.mp (List.mem_filter.mp hj).1
  obtain ⟨g, hg', rfl⟩ := List.mem_map.mp hj'
  unfold mulIdx
  rw [decode_encode]
  exact hmul _ (hf i hi) _ (hg g hg')

theorem closureIdx_sub (gens : List Nat) (hg : ∀ g ∈ gens, decode g ∈ H) :
    ∀ (n seen : Nat) (frontier : List Nat), (∀ i, seen.testBit i = true → decode i ∈ H) →
      (∀ i ∈ frontier, decode i ∈ H) → ∀ i, (closureIdx gens n seen frontier).testBit i = true → decode i ∈ H
  | 0, _, _, hs, _ => hs
  | n + 1, seen, frontier, hs, hf => by
    have hnew := stepIdx_sub H hmul gens seen frontier hg hf
    unfold closureIdx
    split
    · exact hs
    · next y ys heq =>
      rw [heq] at hnew
      exact closureIdx_sub gens hg n _ _
        (fun i hi => (testBit_mask hi).elim (hs i) (hnew i)) hnew

theorem generatedIdx_sub (gens : List Nat) (hg : ∀ g ∈ gens, decode g ∈ H) :
    ∀ i, (generatedIdx gens).testBit i = true → decode i ∈ H :=
  closureIdx_sub H hmul gens hg 48 _ gens
    (fun i hi => (testBit_mask hi).elim (fun h => by rw [Nat.zero_testBit] at h; exact absurd h Bool.false_ne_true) (hg i)) hg

end soundness

/-- Every (order-8, non-scalar unipotent) pair generates GL₂(𝔽₃): 12 × 8 closures, kernel. -/
theorem pairs_generate :
    ((gl 3).filter ord8).all (fun g => ((gl 3).filter unip).all fun h =>
      (gl 3).all fun x => (generatedIdx [encode g, encode h]).testBit (encode x)) = true := by
  decide +kernel

/-- A multiplicatively closed subset of GL₂(𝔽₃) containing an element of order 8 and a non-scalar
unipotent is all of GL₂(𝔽₃). -/
theorem generated_by_ord8_unip (H : List (Mat2 3)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H)
    {g h : Mat2 3} (hg : g ∈ H) (hh : h ∈ H) (h8 : ord8 g = true) (h3 : unip h = true) :
    ∀ x ∈ gl 3, x ∈ H := by
  intro x hx
  have hg' : g ∈ (gl 3).filter ord8 := List.mem_filter.mpr ⟨mem_gl_of_ord8 h8, h8⟩
  have hh' : h ∈ (gl 3).filter unip := List.mem_filter.mpr ⟨mem_gl_of_unip h3, h3⟩
  have hx' := List.all_eq_true.mp (List.all_eq_true.mp (List.all_eq_true.mp pairs_generate g hg') h hh') x hx
  have hgens : ∀ i ∈ [encode g, encode h], decode i ∈ H := by
    intro i hi
    rcases List.mem_cons.mp hi with rfl | hi
    · rw [decode_encode]; exact hg
    rcases List.mem_cons.mp hi with rfl | hi
    · rw [decode_encode]; exact hh
    exact absurd hi List.not_mem_nil
  have := generatedIdx_sub H hmul _ hgens _ hx'
  rwa [decode_encode] at this

end Mat2

/-- The exported ρ̄_3(Frob_p) as an element of `Mat2 3`. -/
def frobMat3 (p : Nat) : Option (Mat2 3) :=
  (galoisMod3Data.find? (fun e => e.1 == p)).map fun e =>
    let f : Nat → Fin 3 := fun k => ⟨k % 3, Nat.mod_lt k (by decide)⟩
    ⟨f e.2[0]!, f e.2[1]!, f e.2[2]!, f e.2[3]!⟩

theorem frob5_ord8 : (frobMat3 5).map Mat2.ord8 = some true := by decide +kernel
theorem frob7_unip : (frobMat3 7).map Mat2.unip = some true := by decide +kernel

/-- **ρ̄_{37a1,3} is surjective.**  Let H ⊆ GL₂(𝔽₃) be closed under multiplication (the image of a
group homomorphism) and contain elements g, h with the conjugation invariants of the exported
ρ̄(Frob_5), ρ̄(Frob_7).  Then H ⊇ GL₂(𝔽₃). -/
theorem mod3_image_37a1_full (H : List (Mat2 3)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H)
    {F5 F7 g h : Mat2 3} (h5 : frobMat3 5 = some F5) (h7 : frobMat3 7 = some F7)
    (hg : g ∈ H) (hh : h ∈ H)
    (hg5 : Mat2.invariants g = Mat2.invariants F5) (hh7 : Mat2.invariants h = Mat2.invariants F7) :
    ∀ x ∈ Mat2.gl 3, x ∈ H := by
  have e5 : Mat2.ord8 F5 = true := by
    have := frob5_ord8
    rw [h5] at this
    exact Option.some.inj this
  have e7 : Mat2.unip F7 = true := by
    have := frob7_unip
    rw [h7] at this
    exact Option.some.inj this
  have h8 : Mat2.ord8 g = true := by unfold Mat2.ord8; rw [hg5]; exact e5
  have h3 : Mat2.unip h = true := by unfold Mat2.unip; rw [hh7]; exact e7
  exact Mat2.generated_by_ord8_unip H hmul hg hh h8 h3

end Oracles
