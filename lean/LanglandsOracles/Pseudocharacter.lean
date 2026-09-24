/-!
# GL_2-pseudocharacters: the Frobenius–Procesi identity on a finite group, kernel-checked.

For a 2-dimensional representation the trace T satisfies, for all g_1, g_2, g_3,
   T(g_1)T(g_2)T(g_3) − T(g_1g_2)T(g_3) − T(g_1g_3)T(g_2) − T(g_2g_3)T(g_1) + T(g_1g_2g_3) + T(g_1g_3g_2) = 0
(Σ_{σ ∈ S_3} sgn(σ) T_σ = 0).  This is the defining relation of a 2-dimensional pseudocharacter
(Taylor) and the excursion data of a GL_2-parameter factor through it.  Here it is verified by
the kernel for every triple in GL_2(F_3) (48³ triples) and GL_2(F_2).
-/
namespace Oracles

/-- 2×2 matrices over Z/n as 4-tuples of `Fin n`. -/
structure Mat2 (n : Nat) where
  a : Fin n
  b : Fin n
  c : Fin n
  d : Fin n
deriving DecidableEq, Repr

namespace Mat2

variable {n : Nat}

def mul (x y : Mat2 n) : Mat2 n :=
  ⟨x.a * y.a + x.b * y.c, x.a * y.b + x.b * y.d, x.c * y.a + x.d * y.c, x.c * y.b + x.d * y.d⟩

def trace (x : Mat2 n) : Fin n := x.a + x.d

def det (x : Mat2 n) : Fin n := x.a * x.d - x.b * x.c

/-- All elements of Fin n, structurally (kernel-reducible). -/
def fins (n : Nat) : List (Fin n) :=
  (List.range n).filterMap fun i => if h : i < n then some ⟨i, h⟩ else none

def all (n : Nat) : List (Mat2 n) :=
  (fins n).flatMap fun a => (fins n).flatMap fun b =>
    (fins n).flatMap fun c => (fins n).map fun d => ⟨a, b, c, d⟩

def gl (n : Nat) : List (Mat2 n) := (all n).filter fun x => x.det.val != 0

/-- Σ_{σ ∈ S_3} sgn(σ) T_σ(g_1, g_2, g_3) for T = trace. -/
def procesi (g1 g2 g3 : Mat2 n) : Fin n :=
  let T := trace
  T g1 * T g2 * T g3 - T (mul g1 g2) * T g3 - T (mul g1 g3) * T g2 - T (mul g2 g3) * T g1
    + T (mul (mul g1 g2) g3) + T (mul (mul g1 g3) g2)

def procesiHolds (n : Nat) : Bool :=
  (gl n).all fun g1 => (gl n).all fun g2 => (gl n).all fun g3 => (procesi g1 g2 g3).val == 0

end Mat2

theorem gl2_F2_order : (Mat2.gl 2).length = 6 := by decide +kernel
theorem gl2_F3_order : (Mat2.gl 3).length = 48 := by decide +kernel

theorem procesi_GL2_F2 : Mat2.procesiHolds 2 = true := by decide +kernel
theorem procesi_GL2_F3 : Mat2.procesiHolds 3 = true := by decide +kernel

end Oracles
