import LanglandsOracles.Pseudocharacter

/-!
# Generation certificates in GL₂(ℤ/n): breadth-first multiplicative closure on machine naturals.

Matrices over ℤ/n are encoded as base-n indices i < n⁴, closures keep the set of seen elements as
a bitmask, and every step is a GMP operation in the kernel.  `generatedIdx_sub` proves soundness:
each index whose bit is set decodes to a product of the generators, so a kernel evaluation
"`generatedIdx gens` has every bit of GL₂ set" certifies that any multiplicatively closed subset
containing the generators is all of GL₂(ℤ/n).  `mem_gl`: the enumeration `gl n` is complete.
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

variable {n : Nat} [NeZero n]

/-- Matrices as indices 0 ≤ i < n⁴ (base n), so that closures run on machine naturals in the kernel. -/
def finN (k : Nat) : Fin n := ⟨k % n, Nat.mod_lt k (Nat.pos_of_neZero n)⟩
def encode (x : Mat2 n) : Nat := x.a.val + n * (x.b.val + n * (x.c.val + n * x.d.val))
def decode (n : Nat) [NeZero n] (i : Nat) : Mat2 n := ⟨finN i, finN (i / n), finN (i / n / n), finN (i / n / n / n)⟩
def mulIdx (n : Nat) [NeZero n] (i j : Nat) : Nat := encode (M2.mul (decode n i) (decode n j))

theorem decode_encode (x : Mat2 n) : decode n (encode x) = x := by
  obtain ⟨⟨a, ha⟩, ⟨b, hb⟩, ⟨c, hc⟩, ⟨d, hd⟩⟩ := x
  have h1 : ∀ u k : Nat, u < n → (u + n * k) % n = u := fun u k hu => by
    rw [Nat.add_mul_mod_self_left, Nat.mod_eq_of_lt hu]
  have h2 : ∀ u k : Nat, u < n → (u + n * k) / n = k := fun u k hu => by
    rw [Nat.add_mul_div_left _ _ (Nat.pos_of_neZero n), Nat.div_eq_of_lt hu, Nat.zero_add]
  simp only [decode, encode, finN, M2.mk.injEq, Fin.mk.injEq]
  rw [h1 a _ ha, h2 a _ ha, h1 b _ hb, h2 b _ hb, h1 c _ hc, h2 c _ hc, Nat.mod_eq_of_lt hd]
  exact ⟨rfl, rfl, rfl, rfl⟩

omit [NeZero n] in
theorem encode_lt (x : Mat2 n) : encode x < n ^ 4 := by
  obtain ⟨⟨a, ha⟩, ⟨b, hb⟩, ⟨c, hc⟩, ⟨d, hd⟩⟩ := x
  have step : ∀ u k m : Nat, u < n → k < m → u + n * k < n * m := fun u k m hu hk =>
    calc u + n * k < n + n * k := Nat.add_lt_add_right hu _
      _ = n * (k + 1) := by rw [Nat.mul_succ, Nat.add_comm]
      _ ≤ n * m := Nat.mul_le_mul_left n hk
  have e : n ^ 4 = n * (n * (n * n)) := by
    show (((1 * n) * n) * n) * n = n * (n * (n * n))
    rw [Nat.one_mul]
    ac_rfl
  show a + n * (b + n * (c + n * d)) < n ^ 4
  rw [e]
  exact step a _ _ ha (step b _ _ hb (step c d n hc hd))

theorem encode_inj {g h : Mat2 n} (e : encode g = encode h) : g = h := by
  have := congrArg (decode n) e
  rwa [decode_encode, decode_encode] at this

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

/-- One code's contribution: the products of x with the generators that are not yet seen, added to the mask. -/
def addProducts (m : Nat → Nat → Nat) (gens : List Nat) (seen x acc : Nat) : Nat :=
  gens.foldl (fun acc g => let j := m x g; if seen.testBit j || acc.testBit j then acc else acc ||| 2 ^ j) acc

/-- The codes base, base + 1, …, base + i − 1 of one chunk: products with the generators for those in the
frontier.  The accumulator is forced to a literal at every step by a cheap GMP test (`a % 2 = 2`, never
true): matching it against `Nat.succ` instead makes the kernel carry the value as `Nat.succ` of a literal and
lose the accelerated arithmetic (300 s instead of 2 s per scan). -/
def chunkMask (m : Nat → Nat → Nat) (gens : List Nat) (seen frontier base : Nat) : Nat → Nat → Nat
  | 0, acc => acc
  | i + 1, acc =>
    let a := if frontier.testBit (base + i) then addProducts m gens seen (base + i) acc else acc
    if a % 2 = 2 then chunkMask m gens seen frontier base i 0 else chunkMask m gens seen frontier base i a

/-- The mask of the products of the frontier with the generators that are not yet seen, scanning the code
range in chunks of 64 and skipping a chunk with one shift-and-mod test when the frontier has no bit in it. -/
def stepMask (m : Nat → Nat → Nat) (gens : List Nat) (seen frontier : Nat) : Nat → Nat → Nat
  | 0, acc => acc
  | c + 1, acc =>
    let a := if (frontier >>> (64 * c)) % 18446744073709551616 = 0 then acc
      else chunkMask m gens seen frontier (64 * c) 64 acc
    if a % 2 = 2 then stepMask m gens seen frontier c 0 else stepMask m gens seen frontier c a

/-- Breadth-first multiplicative closure on bitmasks, with fuel. -/
def closureIdx (m : Nat → Nat → Nat) (gens : List Nat) (bound : Nat) : Nat → Nat → Nat → Nat
  | 0, seen, _ => seen
  | k + 1, seen, frontier =>
    let new := stepMask m gens seen frontier (bound / 64 + 1) 0
    if new = 0 then seen else closureIdx m gens bound k (seen ||| new) new

/-- The semigroup generated by a list of encoded matrices (its closure under multiplication; in a
finite group, the subgroup). -/
def generatedIdx (n : Nat) [NeZero n] (gens : List Nat) : Nat :=
  closureIdx (mulIdx n) gens (n ^ 4) (n ^ 4) (mask 0 gens) (mask 0 gens)

section soundness

variable (H : List (Mat2 n)) (m : Nat → Nat → Nat) (gens : List Nat)
-- the oracle sends (the code of) an element of H and a generator to the code of an element of H
variable (hm : ∀ x ∈ H, ∀ g ∈ gens, ∃ y ∈ H, m (encode x) g = encode y)
include hm

/-- Every index produced is the code of an element of H: the invariant of the closure. -/
def Codes (H : List (Mat2 n)) (i : Nat) : Prop := ∃ x ∈ H, i = encode x

omit [NeZero n] in
theorem addProducts_codes (seen x acc : Nat) (hx : Codes H x) (hacc : ∀ j, acc.testBit j = true → Codes H j) :
    ∀ j, (addProducts m gens seen x acc).testBit j = true → Codes H j := by
  unfold addProducts
  suffices h : ∀ (gs : List Nat), (∀ g ∈ gs, g ∈ gens) → ∀ acc : Nat, (∀ j, acc.testBit j = true → Codes H j) →
      ∀ j, (gs.foldl (fun acc g => let j := m x g; if seen.testBit j || acc.testBit j then acc else acc ||| 2 ^ j) acc).testBit j = true
        → Codes H j from h gens (fun _ h => h) acc hacc
  intro gs
  induction gs with
  | nil => intro _ acc hacc j hj; exact hacc j hj
  | cons g gs ih =>
    intro hgs acc hacc j hj
    have hg : g ∈ gens := hgs g (List.mem_cons_self ..)
    refine ih (fun g' hg' => hgs g' (List.mem_cons_of_mem _ hg')) _ ?_ j hj
    intro j' hj0
    have hj' : (if (seen.testBit (m x g) || acc.testBit (m x g)) = true then acc else acc ||| 2 ^ (m x g)).testBit j' = true := hj0
    split at hj'
    · exact hacc j' hj'
    · rw [Nat.testBit_or, Nat.testBit_two_pow] at hj'
      rcases Bool.or_eq_true _ _ |>.mp hj' with h | h
      · exact hacc j' h
      · obtain ⟨y, hy, rfl⟩ := hx
        obtain ⟨z, hz, e⟩ := hm y hy g hg
        exact ⟨z, hz, (of_decide_eq_true h).symm.trans e⟩

omit [NeZero n] in
theorem chunkMask_codes (seen frontier base : Nat) (hf : ∀ i, frontier.testBit i = true → Codes H i) :
    ∀ (i acc : Nat), (∀ j, acc.testBit j = true → Codes H j) →
      ∀ j, (chunkMask m gens seen frontier base i acc).testBit j = true → Codes H j
  | 0, _, hacc, j, hj => hacc j hj
  | i + 1, acc, hacc, j, hj => by
    unfold chunkMask at hj
    have hstep : ∀ j, (if frontier.testBit (base + i) then addProducts m gens seen (base + i) acc else acc).testBit j = true
        → Codes H j := by
      intro j hj
      split at hj
      · next hfx => exact addProducts_codes H m gens hm seen (base + i) acc (hf _ hfx) hacc j hj
      · exact hacc j hj
    dsimp only at hj
    generalize ha : (if frontier.testBit (base + i) then addProducts m gens seen (base + i) acc else acc) = a at hj hstep
    split at hj
    · exact chunkMask_codes seen frontier base hf i 0 (fun j h => by rw [Nat.zero_testBit] at h; exact absurd h Bool.false_ne_true) j hj
    · exact chunkMask_codes seen frontier base hf i a hstep j hj

omit [NeZero n] in
/-- Every bit of the step mask is the code of a product of a frontier element with a generator. -/
theorem stepMask_codes (seen frontier : Nat) (hf : ∀ i, frontier.testBit i = true → Codes H i) :
    ∀ (c acc : Nat), (∀ j, acc.testBit j = true → Codes H j) →
      ∀ j, (stepMask m gens seen frontier c acc).testBit j = true → Codes H j
  | 0, _, hacc, j, hj => hacc j hj
  | c + 1, acc, hacc, j, hj => by
    unfold stepMask at hj
    have hstep : ∀ j, (if (frontier >>> (64 * c)) % 18446744073709551616 = 0 then acc
        else chunkMask m gens seen frontier (64 * c) 64 acc).testBit j = true → Codes H j := by
      intro j hj
      split at hj
      · exact hacc j hj
      · exact chunkMask_codes H m gens hm seen frontier (64 * c) hf 64 acc hacc j hj
    dsimp only at hj
    generalize ha : (if (frontier >>> (64 * c)) % 18446744073709551616 = 0 then acc
        else chunkMask m gens seen frontier (64 * c) 64 acc) = a at hj hstep
    split at hj
    · exact stepMask_codes seen frontier hf c 0 (fun j h => by rw [Nat.zero_testBit] at h; exact absurd h Bool.false_ne_true) j hj
    · exact stepMask_codes seen frontier hf c a hstep j hj

omit [NeZero n] in
theorem closureIdx_sub (bound : Nat) :
    ∀ (k seen frontier : Nat), (∀ i, seen.testBit i = true → Codes H i) →
      (∀ i, frontier.testBit i = true → Codes H i) → ∀ i, (closureIdx m gens bound k seen frontier).testBit i = true → Codes H i
  | 0, _, _, hs, _ => hs
  | k + 1, seen, frontier, hs, hf => by
    have hnew := stepMask_codes H m gens hm seen frontier hf (bound / 64 + 1) 0 (fun j h => by rw [Nat.zero_testBit] at h; exact absurd h Bool.false_ne_true)
    unfold closureIdx
    simp only
    split
    · exact hs
    · exact closureIdx_sub bound k _ _
        (fun i hi => by
          rw [Nat.testBit_or] at hi
          exact (Bool.or_eq_true _ _ |>.mp hi).elim (hs i) (hnew i))
        hnew

/-- Starting from codes of elements of H, every bit set by the closure is the code of an element of H. -/
theorem closureIdx_mem (bound : Nat) (init : List Nat) (hinit : ∀ i ∈ init, Codes H i) (k : Nat) :
    ∀ x : Mat2 n, (closureIdx m gens bound k (mask 0 init) (mask 0 init)).testBit (encode x) = true → x ∈ H := by
  intro x hx
  have hmask : ∀ i, (mask 0 init).testBit i = true → Codes H i := fun i hi =>
    (testBit_mask hi).elim (fun h => by rw [Nat.zero_testBit] at h; exact absurd h Bool.false_ne_true) (hinit i)
  obtain ⟨y, hy, e⟩ := closureIdx_sub H m gens hm bound k _ _ hmask hmask _ hx
  rw [encode_inj e]
  exact hy

end soundness

/-- The generic generation certificate: if every (P, Q)-pair generates GL₂(ℤ/n) (a kernel fact
`hpairs`, closures through `mulIdx`), then any multiplicatively closed subset containing a P-element
and a Q-element is all of GL₂(ℤ/n). -/
theorem generated_of_pairs (n : Nat) [NeZero n] (P Q : Mat2 n → Bool)
    (hP : ∀ g, P g = true → g ∈ gl n) (hQ : ∀ h, Q h = true → h ∈ gl n)
    (hpairs : ((gl n).filter P).all (fun g => ((gl n).filter Q).all fun h =>
      (gl n).all fun x => (generatedIdx n [encode g, encode h]).testBit (encode x)) = true)
    (H : List (Mat2 n)) (hmul : ∀ x ∈ H, ∀ y ∈ H, M2.mul x y ∈ H)
    {g h : Mat2 n} (hg : g ∈ H) (hh : h ∈ H) (hPg : P g = true) (hQh : Q h = true) :
    ∀ x ∈ gl n, x ∈ H := by
  intro x hx
  have hg' : g ∈ (gl n).filter P := List.mem_filter.mpr ⟨hP g hPg, hPg⟩
  have hh' : h ∈ (gl n).filter Q := List.mem_filter.mpr ⟨hQ h hQh, hQh⟩
  have hx' := List.all_eq_true.mp (List.all_eq_true.mp (List.all_eq_true.mp hpairs g hg') h hh') x hx
  have hgens : ∀ i ∈ [encode g, encode h], Codes H i := by
    intro i hi
    rcases List.mem_cons.mp hi with rfl | hi
    · exact ⟨g, hg, rfl⟩
    rcases List.mem_cons.mp hi with rfl | hi
    · exact ⟨h, hh, rfl⟩
    exact absurd hi List.not_mem_nil
  have hm : ∀ y ∈ H, ∀ i ∈ [encode g, encode h], ∃ z ∈ H, mulIdx n (encode y) i = encode z := by
    intro y hy i hi
    obtain ⟨w, hw, rfl⟩ := hgens i hi
    exact ⟨M2.mul y w, hmul y hy w hw, by simp only [mulIdx, decode_encode]⟩
  exact closureIdx_mem H (mulIdx n) _ hm _ _ hgens _ x hx'

end Mat2

end Oracles
