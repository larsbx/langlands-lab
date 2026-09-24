import LanglandsOracles.QForms
/-!
# Two trace formulas with geometric side = class numbers, recomputed in Lean.

`traceLevel1 k n` = tr T_n | S_k(SL₂(ℤ)) (Zagier's form of Eichler–Selberg).
`eichlerBrandt12 p n` = 12 · tr B(n) on the definite quaternion algebra B_{p,∞}.
`tau n` from Δ = q ∏ (1 − qⁿ)²⁴, an independent spectral side.
-/
namespace Oracles

/-- (ρ^{k−1} − ρ̄^{k−1}) / (ρ − ρ̄) with ρ + ρ̄ = t, ρ ρ̄ = n. -/
def chebP (k : Nat) (t n : Int) : Int :=
  let rec go : Nat → Int → Int → Int
    | 0, _, b => b
    | m + 1, a, b => go m b (t * b - n * a)
  go (k - 2) 0 1

/-- 24 · tr T_n | S_k(SL₂(ℤ)) as an integer, before the exact division by 24. -/
def traceLevel1x24 (k n : Nat) : Int :=
  let tmax := isqrt (4 * n)
  let ts := (List.range (2 * tmax + 1)).map (fun (i : Nat) => (i : Int) - (tmax : Int))
  let elliptic := ts.foldl (fun acc t =>
    acc + chebP k t n * hurwitz12 (4 * n - (t * t).toNat)) 0
  let hyperbolic := (List.range' 1 n).foldl (fun acc d =>
    if n % d == 0 then acc + (Nat.pow (min d (n / d)) (k - 1) : Int) else acc) 0
  Int.neg (elliptic + 12 * hyperbolic)

def traceLevel1 (k n : Nat) : Int := traceLevel1x24 k n / 24

def traceLevel1Exact (k n : Nat) : Bool := traceLevel1x24 k n % 24 == 0

/-- Multiply a truncated series (coefficients low → high) by (1 − q^m). -/
def timesOneMinusQm (s : List Int) (m : Nat) : List Int :=
  List.zipWith (· - ·) s (List.replicate m 0 ++ s)

/-- τ(1..nmax) from Δ = q ∏_{m ≥ 1} (1 − q^m)^{24}, all structural recursion. -/
def tau (nmax : Nat) : List Int :=
  let one : List Int := 1 :: List.replicate nmax 0
  let s := (List.range' 1 nmax).foldl (fun s m =>
    (List.range 24).foldl (fun s _ => timesOneMinusQm s m) s) one
  s.take nmax

def isSquare (n : Nat) : Bool := isqrt n * isqrt n == n

/-- 12 · tr B(n) on B_{p,∞}:
  [n = □] (p−1) + 12 Σ_{s² < 4n} Σ_{f : p ∤ f} h(d)/w(d) · (1 − (d/p)),  d = (s²−4n)/f². -/
def eichlerBrandt12 (p n : Nat) : Int :=
  let base : Int := if isSquare n then (p : Int) - 1 else 0
  let smax := isqrt (4 * n - 1)
  let ss := (List.range (2 * smax + 1)).map (fun (i : Nat) => (i : Int) - (smax : Int))
  ss.foldl (fun acc s =>
    (squareDivisors (s * s - 4 * n)).foldl (fun acc fd =>
      if fd.1 % p == 0 then acc
      else acc + (12 * classNumber fd.2 / unitCount fd.2 : Nat) * (1 - kronecker fd.2 p)) acc) base

end Oracles
