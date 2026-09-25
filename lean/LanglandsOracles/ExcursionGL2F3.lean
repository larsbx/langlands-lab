import LanglandsOracles.Pseudocharacter
import LanglandsOracles.ExcursionGL2

/-!
# The rank-2 converse instantiated: excursion data for Ĝ = GL₂(𝔽₃) give pseudocharacters Γ → 𝔽₃.

GL₂(𝔽₃) is made a `Grp` on the kernel-enumerated list `Mat2.gl 3`: associativity, the unit laws and
tr(xy) = tr(yx) are algebraic (distributivity in 𝔽₃ by `decide`, then `ac_rfl`); closure under
multiplication and inversion and x⁻¹x = 1 are kernel checks over the 48 (resp. 48²) elements.  The
Procesi identity for the trace is `procesi_GL2_F3` (110 592 triples, kernel), transported from its
Bool form.  `gl2_pseudocharacter` then applies to every excursion datum with values in 𝔽₃: this is
the setting of the mod-3 instance of 37a1 (`ExcursionInstance.lean`), where the Frobenius matrices
live in GL₂(𝔽₃) and the Hecke eigenvalues are their traces.
-/
namespace Oracles

namespace Mat2

/-- GL₂(𝔽₃) as the subtype of the enumerated list. -/
abbrev GL3 := {x : Mat2 3 // x ∈ gl 3}

def one3 : Mat2 3 := ⟨1, 0, 0, 1⟩

/-- det(x)·adj(x): in 𝔽₃ every unit is its own inverse, so this is x⁻¹ on GL₂(𝔽₃). -/
def inv3 (x : Mat2 3) : Mat2 3 := ⟨x.det * x.d, x.det * (0 - x.b), x.det * (0 - x.c), x.det * x.a⟩

theorem mul_assoc3 (x y z : Mat2 3) : mul (mul x y) z = mul x (mul y z) := by
  have hd1 : ∀ a b c : Fin 3, a * (b + c) = a * b + a * c := by decide
  have hd2 : ∀ a b c : Fin 3, (a + b) * c = a * c + b * c := by decide
  haveI : Std.Associative (α := Fin 3) (· + ·) := ⟨by decide⟩
  haveI : Std.Commutative (α := Fin 3) (· + ·) := ⟨by decide⟩
  simp only [mul, hd1, hd2, Fin.mul_assoc, Mat2.mk.injEq]
  refine ⟨?_, ?_, ?_, ?_⟩ <;> ac_rfl

theorem one_mul3 (x : Mat2 3) : mul one3 x = x := by
  simp only [mul, one3, Fin.one_mul, Fin.zero_mul, Fin.zero_add, Fin.add_zero]

theorem mul_one3 (x : Mat2 3) : mul x one3 = x := by
  simp only [mul, one3, Fin.mul_one, Fin.mul_zero, Fin.zero_add, Fin.add_zero]

theorem trace_mul_comm3 (x y : Mat2 3) : trace (mul x y) = trace (mul y x) := by
  haveI : Std.Associative (α := Fin 3) (· + ·) := ⟨by decide⟩
  haveI : Std.Commutative (α := Fin 3) (· + ·) := ⟨by decide⟩
  haveI : Std.Commutative (α := Fin 3) (· * ·) := ⟨Fin.mul_comm⟩
  simp only [trace, mul]
  ac_rfl

theorem oneMem : one3 ∈ gl 3 := by decide +kernel
theorem invMul_all : (gl 3).all (fun x => mul (inv3 x) x == one3) = true := by decide +kernel
theorem mulMem_all : (gl 3).all (fun x => (gl 3).all fun y => decide (mul x y ∈ gl 3)) = true := by
  decide +kernel
theorem invMem_all : (gl 3).all (fun x => decide (inv3 x ∈ gl 3)) = true := by decide +kernel

theorem mulMem (x y : GL3) : mul x.1 y.1 ∈ gl 3 :=
  of_decide_eq_true (List.all_eq_true.mp (List.all_eq_true.mp mulMem_all x.1 x.2) y.1 y.2)

theorem invMem (x : GL3) : inv3 x.1 ∈ gl 3 :=
  of_decide_eq_true (List.all_eq_true.mp invMem_all x.1 x.2)

theorem invMul (x : GL3) : mul (inv3 x.1) x.1 = one3 :=
  beq_iff_eq.mp (List.all_eq_true.mp invMul_all x.1 x.2)

/-- GL₂(𝔽₃) as a group. -/
def grpGL3 : Grp GL3 where
  mul x y := ⟨mul x.1 y.1, mulMem x y⟩
  one := ⟨one3, oneMem⟩
  inv x := ⟨inv3 x.1, invMem x⟩
  mul_assoc a b c := Subtype.ext (mul_assoc3 a.1 b.1 c.1)
  one_mul a := Subtype.ext (one_mul3 a.1)
  mul_one a := Subtype.ext (mul_one3 a.1)
  inv_mul a := Subtype.ext (invMul a)

/-- The trace on GL₂(𝔽₃). -/
def traceGL3 (x : GL3) : Fin 3 := trace x.1

theorem traceGL3_comm (x y : GL3) : traceGL3 (grpGL3.mul x y) = traceGL3 (grpGL3.mul y x) :=
  trace_mul_comm3 x.1 y.1

/-- The kernel-checked Procesi identity, in the additive form the abstract theorem takes. -/
theorem procesi3 (x y z : GL3) :
    traceGL3 x * traceGL3 y * traceGL3 z + traceGL3 (grpGL3.mul (grpGL3.mul x y) z)
        + traceGL3 (grpGL3.mul (grpGL3.mul x z) y)
      = traceGL3 (grpGL3.mul x y) * traceGL3 z + traceGL3 (grpGL3.mul x z) * traceGL3 y
        + traceGL3 (grpGL3.mul y z) * traceGL3 x := by
  have h0 : procesiHolds 3 = true := procesi_GL2_F3
  unfold procesiHolds at h0
  have h := List.all_eq_true.mp (List.all_eq_true.mp (List.all_eq_true.mp h0 x.1 x.2) y.1 y.2) z.1 z.2
  have hz : procesi x.1 y.1 z.1 = 0 := Fin.ext (beq_iff_eq.mp h)
  unfold procesi at hz
  dsimp only at hz
  show trace x.1 * trace y.1 * trace z.1 + trace (mul (mul x.1 y.1) z.1) + trace (mul (mul x.1 z.1) y.1)
    = trace (mul x.1 y.1) * trace z.1 + trace (mul x.1 z.1) * trace y.1 + trace (mul y.1 z.1) * trace x.1
  -- Σ sgn(σ) T_σ = 0 ⇒ even terms = odd terms, in 𝔽₃ with the six monomials as atoms
  generalize trace x.1 * trace y.1 * trace z.1 = P at hz ⊢
  generalize trace (mul x.1 y.1) * trace z.1 = Q₁ at hz ⊢
  generalize trace (mul x.1 z.1) * trace y.1 = Q₂ at hz ⊢
  generalize trace (mul y.1 z.1) * trace x.1 = Q₃ at hz ⊢
  generalize trace (mul (mul x.1 y.1) z.1) = R₁ at hz ⊢
  generalize trace (mul (mul x.1 z.1) y.1) = R₂ at hz ⊢
  omega

end Mat2

open Mat2 in
/-- **Every excursion datum for GL₂(𝔽₃) with values in 𝔽₃ is a 2-dimensional pseudocharacter of Γ.** -/
theorem gl2_F3_pseudocharacter {Γ : Type} {gΓ : Grp Γ} (D : ExcursionData gΓ grpGL3 (Fin 3)) (γ₁ γ₂ γ₃ : Γ) :
    exChar D traceGL3 γ₁ * exChar D traceGL3 γ₂ * exChar D traceGL3 γ₃
        + exChar D traceGL3 (gΓ.mul (gΓ.mul γ₁ γ₂) γ₃) + exChar D traceGL3 (gΓ.mul (gΓ.mul γ₁ γ₃) γ₂)
      = exChar D traceGL3 (gΓ.mul γ₁ γ₂) * exChar D traceGL3 γ₃
        + exChar D traceGL3 (gΓ.mul γ₁ γ₃) * exChar D traceGL3 γ₂
        + exChar D traceGL3 (gΓ.mul γ₂ γ₃) * exChar D traceGL3 γ₁ :=
  gl2_pseudocharacter traceGL3 traceGL3_comm D γ₁ γ₂ γ₃ procesi3

open Mat2 in
/-- χ(1) = tr(1) = 2: the pseudocharacter has dimension 2. -/
theorem gl2_F3_pseudocharacter_one {Γ : Type} {gΓ : Grp Γ} (D : ExcursionData gΓ grpGL3 (Fin 3)) :
    exChar D traceGL3 gΓ.one = 2 :=
  exChar_one traceGL3 traceGL3_comm D

end Oracles
