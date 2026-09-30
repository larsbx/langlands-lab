/-!
# Law B, stratum-uniformly: the Deligne sign of the monic Miller frame and the strict second law.

For monic Miller functions g_{a,b} (div = (a) + (b) − (a+b) − (O)) on an elliptic curve, tame Weil
reciprocity (IMPORTED; measured exactly in `biextension.py`) says the naive pair of partial laws
κ(c; a₁, a₂) = g_{a₁,a₂}(c), κ'_a(c₁, c₂) = g_{c₁,c₂}(a) misses the biextension exchange axiom by the
tame symbol at O, (−1)^{ord_O g_{a₁,a₂} · ord_O g_{c₁,c₂}}.  Everything after that is sign algebra on the
group of points, proved here for any commutative group A (signs as `Bool`, true = −1, xor = product):

* `ordO_odd_iff`: ord_O g_{a,b} ∈ {0, −2, −1} (an argument O / vertical / generic) is odd exactly on
  the generic stratum, uniformly — so the Deligne sign is `deligne a₁ a₂ c₁ c₂ = generic a ∧ generic c`;
* `generic_eq_du`: generic(a, b) = u(a) + u(b) + u(a+b) mod 2 with u(a) = [a ≠ O] — the parity is a
  coboundary;
* `exchange_strict`: twisting the second law by ε_a(c₁, c₂) = (−1)^{u(a)·δu(c₁,c₂)} cancels the Deligne
  sign on every stratum at once;
* `twist_cocycle`, `twist_symm`, `twist_rigid_left`, `twist_rigid_base`: ε_a is a symmetric
  2-cocycle in c, trivial when an argument is O and when a = O, so β₂ = ε·κ' is still a rigidified
  second law — the strict presentation of β₂ in the frame s.
* `no_frame_fix`: a frame change σ(a, c) multiplies the exchange ratio by 1, so no frame change can
  absorb the sign: the correction must act on β₂ alone.
No `decide` on data; axioms propext, Quot.sound (enforced by the audit gate).
-/
namespace Oracles.Biext

variable {A : Type} [Add A] [Zero A] [DecidableEq A]

/-- The laws of a commutative group that the sign algebra uses (no inverses needed). -/
structure AddCommLaws (A : Type) [Add A] [Zero A] : Prop where
  zero_add : ∀ a : A, 0 + a = a
  add_zero : ∀ a : A, a + 0 = a
  add_comm : ∀ a b : A, a + b = b + a
  add_assoc : ∀ a b c : A, a + b + c = a + (b + c)

/-- u(a) = [a ≠ O]. -/
def u (a : A) : Bool := !decide (a = 0)

/-- The generic stratum: a, b, a + b all ≠ O. -/
def generic (a b : A) : Bool := u a && u b && u (a + b)

/-- ord_O of the monic Miller function g_{a,b}. -/
def ordO (a b : A) : Int := if a = 0 ∨ b = 0 then 0 else if a + b = 0 then -2 else -1

/-- The Deligne sign of the naive exchange: (−1)^{ord_O g_{a₁,a₂} · ord_O g_{c₁,c₂}}. -/
def deligneOrd (a₁ a₂ c₁ c₂ : A) : Bool := (ordO a₁ a₂ * ordO c₁ c₂) % 2 != 0

def deligne (a₁ a₂ c₁ c₂ : A) : Bool := generic a₁ a₂ && generic c₁ c₂

/-- The twist of the second law: ε_a(c₁, c₂) = (−1)^{u(a)·δu(c₁,c₂)}. -/
def twist (a c₁ c₂ : A) : Bool := u a && generic c₁ c₂

variable (L : AddCommLaws A)
include L

omit L in
theorem ordO_odd_iff (a b : A) : (ordO a b % 2 != 0) = generic a b := by
  unfold ordO generic u
  by_cases ha : a = 0
  · simp [ha]
  · by_cases hb : b = 0
    · simp [ha, hb]
    · by_cases hab : a + b = 0 <;> simp [ha, hb, hab]

omit L in
/-- The Deligne sign, uniformly over the strata. -/
theorem deligne_uniform (a₁ a₂ c₁ c₂ : A) : deligneOrd a₁ a₂ c₁ c₂ = deligne a₁ a₂ c₁ c₂ := by
  unfold deligneOrd deligne
  rw [← ordO_odd_iff a₁ a₂, ← ordO_odd_iff c₁ c₂, Int.mul_emod]
  unfold ordO
  by_cases h1 : a₁ = 0 ∨ a₂ = 0 <;> by_cases h2 : a₁ + a₂ = 0 <;>
    by_cases h3 : c₁ = 0 ∨ c₂ = 0 <;> by_cases h4 : c₁ + c₂ = 0 <;> simp [h1, h2, h3, h4]

/-- The parity of ord_O is the coboundary of u. -/
theorem generic_eq_du (a b : A) : generic a b = xor (xor (u a) (u b)) (u (a + b)) := by
  unfold generic u
  by_cases ha : a = 0
  · subst ha; rw [L.zero_add]; simp
  · by_cases hb : b = 0
    · subst hb; rw [L.add_zero]; simp [ha]
    · simp [ha, hb]

/-- Exchange holds strictly for (β₁, ε·κ'): the Deligne sign and the twists cancel on every stratum. -/
theorem exchange_strict (a₁ a₂ c₁ c₂ : A) :
    xor (deligne a₁ a₂ c₁ c₂) (xor (twist (a₁ + a₂) c₁ c₂) (xor (twist a₁ c₁ c₂) (twist a₂ c₁ c₂))) = false := by
  unfold deligne twist
  rw [generic_eq_du L a₁ a₂]
  cases u a₁ <;> cases u a₂ <;> cases u (a₁ + a₂) <;> cases generic c₁ c₂ <;> rfl

theorem twist_symm (a c₁ c₂ : A) : twist a c₁ c₂ = twist a c₂ c₁ := by
  unfold twist; rw [generic_eq_du L, generic_eq_du L, L.add_comm c₂ c₁]
  cases u c₁ <;> cases u c₂ <;> rfl

/-- ε_a is a 2-cocycle in c: ε(c₁,c₂) ε(c₁+c₂,c₃) = ε(c₁,c₂+c₃) ε(c₂,c₃). -/
theorem twist_cocycle (a c₁ c₂ c₃ : A) :
    xor (twist a c₁ c₂) (twist a (c₁ + c₂) c₃) = xor (twist a c₁ (c₂ + c₃)) (twist a c₂ c₃) := by
  unfold twist
  simp only [generic_eq_du L, L.add_assoc]
  cases u a <;> cases u c₁ <;> cases u c₂ <;> cases u c₃ <;> cases u (c₁ + c₂) <;> cases u (c₂ + c₃) <;>
    cases u (c₁ + (c₂ + c₃)) <;> rfl

omit L in
theorem twist_rigid_left (a c : A) : twist a 0 c = false := by
  unfold twist generic u; simp

omit L in
theorem twist_rigid_base (c₁ c₂ : A) : twist (0 : A) c₁ c₂ = false := by
  unfold twist u; simp

omit [Zero A] [DecidableEq A] L in
/-- A frame change σ(a, c) contributes σ-ratios that cancel in pairs in the exchange ratio: the
defect is frame-invariant, so it cannot be removed by rescaling the section. -/
theorem no_frame_fix (σ : A → A → Bool) (a₁ a₂ c₁ c₂ : A) :
    let law₁ (c x y : A) := xor (xor (σ x c) (σ y c)) (σ (x + y) c)
    let law₂ (a x y : A) := xor (xor (σ a x) (σ a y)) (σ a (x + y))
    xor (xor (law₁ c₁ a₁ a₂) (law₁ c₂ a₁ a₂)) (law₂ (a₁ + a₂) c₁ c₂)
      = xor (xor (law₂ a₁ c₁ c₂) (law₂ a₂ c₁ c₂)) (law₁ (c₁ + c₂) a₁ a₂) := by
  intro law₁ law₂
  simp only [law₁, law₂]
  cases σ a₁ c₁ <;> cases σ a₂ c₁ <;> cases σ (a₁ + a₂) c₁ <;> cases σ a₁ c₂ <;> cases σ a₂ c₂ <;>
    cases σ (a₁ + a₂) c₂ <;> cases σ a₁ (c₁ + c₂) <;> cases σ a₂ (c₁ + c₂) <;>
    cases σ (a₁ + a₂) (c₁ + c₂) <;> rfl

end Oracles.Biext
