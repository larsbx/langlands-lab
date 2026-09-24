# Dossier: three Langlands entry points, executed

Status vocabulary: **COMPUTED** = both sides produced by exact arithmetic in this
repo and compared; **IMPORTED** = a theorem quoted to interpret a match, not
verified here.  Every COMPUTED line is a pytest assertion.

## Branch 2 — Brandt matrices, trace formulas, Jacquet–Langlands, Ramanujan

### 2.1 Supersingular locus (COMPUTED)
Roots of the Hasse polynomial H_p(λ) = Σ C(m,i)² λ^i in 𝔽_{p²}, pushed to j.
Counts agree with ⌊p/12⌋ + {0,1,1,2}[p mod 12] and with Eichler's mass formula
tr B(1) = (p−1)/12 + ¼(1−(−4/p)) + ⅓(1−(−3/p)) for all p ∈ [11, 73].

### 2.2 Brandt matrices (COMPUTED)
B(ℓ)_{ij} = multiplicity of j_j as a root of Φ_ℓ(j_i, Y) in 𝔽_{p²}[Y].  Checked:
row sums ℓ+1; B(2)B(3) = B(3)B(2); B(ℓ)·diag|Aut E_j| symmetric (dual isogeny).

Example, p = 11 (j = 0, 1728, |Aut| = 6, 4):
```
B(2) = [[0, 3], [2, 1]]      B(3) = [[1, 3], [2, 2]]
```

### 2.3 Eichler's trace formula (COMPUTED, both sides)
Spectral side: tr B(n) for n ∈ {1,2,3,4,6,8,9,12} from adjacency and the Hecke
relations B(ℓ²) = B(ℓ)² − ℓ, B(mn) = B(m)B(n).
Geometric side, class numbers only:

    tr B(n) = [n = □]·(p−1)/12 + Σ_{s² < 4n} Σ_{f: p∤f} h(d)/w(d) · (1 − (d/p)),  d = (s²−4n)/f².

Equal for every p ∈ {11,…,53} and every n above.  Derivation used (IMPORTED for
the *derivation*, but the equality itself is COMPUTED): Deuring's correspondence
between optimal embeddings O_d ↪ End(E_i) and CM lifts; the local condition at
p kills orders with p | f.

Sample traces (p: n → tr):

| p | 1 | 2 | 3 | 4 | 6 | 8 | 9 | 12 |
|---|---|---|---|---|---|---|---|---|
| 11 | 2 | 1 | 3 | 9 | 14 | 15 | 11 | 26 |
| 37 | 3 | 1 | 2 | 7 | 18 | 15 | 17 | 20 |
| 53 | 5 | 1 | 4 | 7 | 12 | 15 | 21 | 26 |

### 2.4 Eichler–Selberg at level 1 (COMPUTED, both sides)
Zagier's form, tr T_n | S_k = −½ Σ_{t²≤4n} P_k(t,n) H(4n−t²) − ½ Σ_{dd'=n} min(d,d')^{k−1},
reproduces τ(n) for n ≤ 30 (τ from Δ = q∏(1−qⁿ)²⁴, independently), dim S_k for
k ≤ 36, and a₂ = 216, −528, 456 for k = 16, 18, 20, tr T₂ = 1080 for k = 24.

### 2.5 Jacquet–Langlands as an integer oracle (COMPUTED; modularity IMPORTED)
For each rational newform of prime level p ≤ 101 (Cremona model, discriminant
checked to be ±p^k), a₂, a₃ are point counts over 𝔽₂, 𝔽₃.  A common eigenvector
of B(2), B(3) with exactly these eigenvalues exists and the joint eigenspace has
dimension = number of such forms (multiplicity one).  Hecke polynomials:

| p | H₂(x) |
|---|---|
| 23 | x² + x − 1 |
| 29 | x² + 2x − 1 |
| 31 | x² − x − 1 |
| 37 | x(x + 2)  ← 37a (a₂ = −2), 37b (a₂ = 0) |
| 43 | (x + 2)(x² − 2) |
| 47 | x⁴ − x³ − 5x² + 5x − 1 |

For p ∈ {11, 17, 19, 37} (all forms rational) the class-number side gives
tr B(ℓ) − (ℓ+1) = Σ_E a_ℓ(E) for ℓ ≤ 31 — Eichler's formula against point counts at
primes where no Φ_ℓ is available.

### 2.6 Ramanujan–Petersson (COMPUTED; Deligne IMPORTED as the reason)
For p ≤ 71 and ℓ ∈ {2,3}: the Hecke polynomial is real-rooted and no root has
λ² > 4ℓ (Sturm counts on H and on the resultant G(y) = ∏(y − λᵢ²)).  So each
graph is Ramanujan.  The Apollonian λ₂ measurements are *not* this theorem:
there the spectral gap for congruence quotients comes from Selberg's 3/16 and
Kim–Sarnak θ₇ = 7/64 bounds on Maass forms, which are weaker than RP for
holomorphic weight-2 forms (Deligne = Weil for the Jacobian).  RP is the
statement that Frobenius traces are as small as the Weil bound allows, so a
"floor via Frobenius trace" cannot hide below 2√ℓ.

## Branch 1 — GL₁ geometric CFT on E = 37a1 (y² = x³ − 1296x + 11664) mod p

a_p(37a1) by point count: p ↦ −2, −1, −5, −2, 0, 0, 2 for p = 5, 7, 11, 13, 17, 19, 23.
E(𝔽₅) ≅ ℤ/8, E(𝔽₇) ≅ ℤ/9 (cyclic in both cases).

### 1.1 Galois side: the Lang isogeny (COMPUTED)
L(P) = Frob(P) − P.  Among E(𝔽_{pⁿ}), the fiber over x ∈ E(𝔽_p) is nonempty iff
n·x = O, has exactly #E(𝔽_p) points, and Frob acts on it as translation by x
(n = 2, 3, 4).  On the χ-isotypic line of ℚ̄_ℓ[fiber], Frob acts by χ(x): checked
for all 8 (resp. 9) characters and all fibers.  This is tr(Frob_x | L_χ) = χ(x).

### 1.2 Character sheaf traces (COMPUTED)
tr(Frob_{pᵏ} | A_χ) on Pic⁰(𝔽_{pᵏ}) = E(𝔽_{pᵏ}) is χ∘N (N = Frobenius trace to
E(𝔽_p)); it is a character of E(𝔽_{pᵏ}) for k = 2, 3, and restricts to χᵏ on E(𝔽_p).

### 1.3 Descent along Abel–Jacobi (COMPUTED)
For every line y = λx + μ and x = c over 𝔽_p, the zeros (found in 𝔽_{p⁶},
including tangencies, e.g. x − 2 is tangent at the 2-torsion point (2,0) over 𝔽₅)
sum to O in E: χ(div f) = 1, so χ is a character of Pic, i.e. A_χ is multiplicative.

### 1.4 Weil reciprocity with the Deligne sign (COMPUTED)
Tame symbols (f,g)_P = (−1)^{v(f)v(g)} (f^{v(g)}/g^{v(f)})(P) from Laurent
expansions in a uniformizer at every P (u = x − x_P, u = y at 2-torsion,
t = −x/y at O).  For two non-vertical lines, (f,g)_O = (−1)⁹ = −1 and the product
over finite points is −1, total 1.  This sign is the (−1)^{ord·ord} of the
rigidified biextension law.

### 1.5 The L-function (COMPUTED; cohomological prediction IMPORTED)
L(χ, T) = ∏_x (1 − χ(Nx) T^{deg x})⁻¹ in ℤ[ℤ/N][[T]] over closed points to
degree 4 (p = 5: 8, 12, 32, 152 closed points of degree 1..4) and 3 (p = 7).
- χ ≠ 1: every coefficient of T^n, n ≥ 1, is 0 in ℤ[ζ_N] — but not termwise —
  matching dim H¹(Ē, L_χ) = 2g − 2 = 0.
- χ = 1: coefficients 1, 8, 48, 248, 1248 (p = 5) = those of
  Z(E,T) = (1 + 2T + 5T²)/((1−T)(1−5T)); the a_p = −2 here is the Frobenius trace on
  H¹, and it is the same 37a1 eigenvalue Brandt sees at level 37.
The degree twist χ·α^{deg} gives L(χ, αT); nothing new.

## Branch 3 — Carlitz module, seed of the function-field act

C_t(x) = tx + x^p over A = 𝔽_p[t].  COMPUTED for p ∈ {2,3,5}, deg P ≤ 3:
- Fermat–Carlitz: C_P(x) ≡ x^{p^{deg P}} (mod P) as p-polynomials.
- Reciprocity: for P ∤ M, in 𝔽_P = 𝔽_p(θ), θ a root of P, and the extension of
  degree ord_M(P) that splits C_M: every λ ∈ C[M] satisfies λ^{|P|} = C_P(λ).
- Decomposition: the 𝔽_P-degree of λ is the order of P in (A/ann λ)^× — P splits
  in K(C[M]) exactly as p splits in ℚ(ζ_m).
- C[M] ≅ A/M (|M| distinct roots, a generator exists).

Next act (not code): harmonic cochains on Γ₀(𝔫)\𝒯 for the (q+1)-regular
Bruhat–Tits tree of PGL₂(𝔽_q((1/t))), T_𝔭 as adjacency, Drinfeld's rank-2
matching; then V. Lafforgue's excursion relations as a Lean 4 target.
