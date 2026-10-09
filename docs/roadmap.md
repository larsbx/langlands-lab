# Roadmap: from instances of known theorems to proofs of conjectural statements

Status: a plan. Nothing below is started unless it is marked done. Each stage names what would
become PROVED, what stays IMPORTED, and the Lean theorem or test that would mark it complete.
The [dossier](dossier.md) remains the ledger of what is actually established.

## What "proving theorems from the conjectures" can mean here

The lab cannot prove the Langlands conjectures in general, and no stage below claims to. It
works with explicit objects, finite coefficients and exact arithmetic, so its proofs are about
specific curves, specific forms, or algebraic structures with finite data. Within those limits,
three kinds of progress are possible. They are listed from closest to farthest from what
exists today.

1. **Closing a proved chain.** Some steps of a known proof are already formalized here. The
   remaining steps can be formalized too, so that the statement rests on fewer imported
   theorems. The GL₂ excursion chain is the main example.
2. **Proving a conjectural statement for one object.** Some theorems turn a finite computation
   into a proof that a specific object satisfies the conjecture. The model is the Faltings–Serre
   method, which proves that two Galois representations are isomorphic from finitely many trace
   comparisons. Each certificate is a theorem about that object, even where the general
   conjecture is open.
3. **Conditional theorems.** A conjecture can be stated as an explicit hypothesis in Lean and
   its consequences proved. The logical dependence then becomes exact, and when the conjecture
   is proved, the consequence follows. The lab already does this in one place: the mod-ℓ image
   theorems take the Eichler–Shimura relation as a hypothesis.

## Where the lab stands

- **Proved in Lean.** The excursion relations imply a character for GL₁ (`gl1_character`) and a
  2-dimensional pseudocharacter for GL₂ over every commutative semiring
  (`gl2_ring_pseudocharacter`). A 2-dimensional pseudocharacter is the trace of an explicit
  representation in the split, absolutely irreducible case, for every group (`pseudochar_rep`).
  Composed for GL₂(ℤ/n), these give excursion data ⇒ representation (`excursion_rep_Zmod`).
  Satake for PGL₂ holds for every q, from two inputs computed on the tree.
- **Certified in the kernel.** The mod-ℓ Galois images of the lab's 15 elliptic curves (Cremona's
  11a1 to 101a1): S₃ or C₂ for ℓ = 2, full GL₂(𝔽_ℓ) for every prime ℓ from 7 to 31, and for ℓ = 5
  on 14 curves, with Eichler–Shimura as the one imported step.
- **Computed, both sides.** Trace formulas, Jacquet–Langlands at prime level, geometric class
  field theory for GL₁ on 37a1, and Drinfeld's dictionary for specific curves over 𝔽₂(t) and
  𝔽₃(t).

## Stage 1: close the GL₂ excursion chain with finite coefficients

**Goal theorem.** Let Γ be any group and k a finite field of odd characteristic. Every
2-dimensional pseudocharacter Γ → k is the trace of a semisimple representation over k, unique
up to conjugacy. Composed with `gl2_pseudocharacter`, every excursion datum for GL₂ with values
in k then yields such a representation, unique up to conjugacy. This is the step "excursion
data ⇒ Langlands parameter" of V. Lafforgue's construction for GL₂, proved with no imported
theorem.

1. **Uniqueness in the absolutely irreducible case** (`pseudochar_rep_unique`). Any
   representation with trace T is conjugate to the constructed one. Approach: in any such ρ′, the
   image of e = κ(g − μ) is a rank-one idempotent matrix. A vector spanning its image, together
   with ρ′(x₀) applied to a vector of the complementary line, gives a basis in which ρ′ has the
   constructed entries.
2. **The reducible case** (`pseudochar_rep_reducible`). If the pairing B vanishes identically,
   the (1,1) entry identity `entry_a` says a(xy) = a(x)a(y). So a and d = T − a are characters,
   and the semisimple representation is diag(a, d).
3. **Distinct eigenvalues only over the quadratic extension.** Suppose no g has distinct
   eigenvalues in k, but some g has distinct roots of X² − T(g)X + D(g) in k′ = k[X]/(that
   polynomial), the field with |k|² elements. Run the split construction over k′, then descend
   to k: a representation over a finite field whose trace takes values in a subfield is
   realizable over that subfield, because Schur indices over finite fields are 1 (Wedderburn's
   little theorem). For 2×2 matrices this needs an explicit elementary descent argument.
4. **Every element has a repeated eigenvalue, even over k̄.** Then T(g)² = 4D(g) for all g.
   Show that χ = T/2 is multiplicative, so the semisimple representation is χ ⊕ χ.

The cases are exhaustive. Either some g has distinct eigenvalues in k, which is handled by
`pseudochar_rep` and item 2; or only over k′, which is item 3; or over neither, which is item 4.
Item 1 then gives uniqueness, so together they give the goal theorem.

**Stays IMPORTED.** V. Lafforgue's construction of the excursion data themselves, from the
cohomology of moduli spaces of shtukas. Formalizing that is far outside this lab.
**Prerequisites.** None beyond `PseudocharRep.lean` and `RingNorm.lean`.

## Stage 2: prove modularity of specific curves by the Faltings–Serre method

**Goal.** For a specific elliptic curve E over ℚ and a newform f computed in the lab, prove
that their 2-adic Galois representations have isomorphic semisimplifications, so E is modular,
from finitely many trace comparisons.

**The theorem used (IMPORTED).** Suppose two 2-adic representations of Gal(ℚ̄/ℚ) are unramified
outside a finite set S and have the same residual semisimplification. If their traces agree on
an explicit finite set of primes, determined by the field the residual representation cuts out,
then their semisimplifications are isomorphic. When the residual image is a 2-group this is
Livné's criterion; otherwise it is the Faltings–Serre method. Both rest on Chebotarev density and
Galois cohomology, which the lab does not formalize.

**What the lab supplies.**

- The residual image is already certified in the kernel (§3.8 of the dossier), and it decides
  the variant. 17a1, 73a1 and 89b1 have image C₂, a 2-group, so Livné's criterion applies; the
  other twelve curves have image S₃.
- From that image the lab computes the finite set of test primes, from the cubic or quadratic
  fields involved.
- a_p(E) comes from point counts, recomputed in Lean as it already is for 37a1. a_p(f) comes
  from Brandt matrices or modular symbols, already computed. A kernel certificate then checks
  equality on the test set.

**Steps.**

1. Livné's criterion for the three C₂ curves.
2. The S₃ form of Faltings–Serre for the twelve S₃ curves.
3. One certificate per curve, recorded as COMPUTED + KERNEL with the criterion IMPORTED by name.

**Honest scope.** Modularity of these curves is already a theorem (Wiles; Breuil, Conrad,
Diamond and Taylor). The instance proofs are independent of it and serve to make the method
work end to end in the lab.

**Toward open cases.** The same method has proved conjectural statements for specific objects
where no general theorem applied. Examples are modularity of particular elliptic curves over
imaginary quadratic fields (Dieulefait, Guerberoff and Pacetti) and paramodularity of particular
abelian surfaces (Brumer, Pacetti, Poor, Tornaría, Voight and Yasaki). Following them needs a new
automorphic oracle: Bianchi modular forms over ℚ(i), or Siegel paramodular forms of degree 2.
Each is a substantial project and is listed here as the horizon of Stage 2, not as a near-term
step.

## Stage 3: prove instances of Drinfeld's dictionary from finitely many places

Over 𝔽_q(t) the correspondence for GL₂ is a theorem (Drinfeld). The goal here is instance
proofs: that a given elliptic curve over 𝔽_q(t) corresponds to a given eigenform on the tree,
checked at finitely many places rather than all.

- **Mechanism.** Strong multiplicity one, with an effective bound in terms of the conductor,
  reduces the comparison to finitely many places. Both the bound and the degree formula for the
  L-functions (Grothendieck–Ogg–Shafarevich) stay IMPORTED. The lab computes the bound for the
  curves already in §3.4 of the dossier and checks the a_𝔭 below it in the kernel.
- **Satake inputs as theorems.** This is already an open item: prove the walk model of the tree
  seen from an end, and the relation A₁A_n = A_{n+1} + qA_{n−1}, for the abstract (q+1)-regular
  tree. Satake then holds with no computed inputs.

## Stage 4: conditional theorems, with conjectures as explicit Lean hypotheses

The mod-ℓ image theorems already show the pattern: the Frobenius trace and determinant
equalities enter as hypotheses, and the image is the conclusion. This stage makes the pattern
systematic.

1. **Congruences from Sturm's bound.** Sturm's theorem (IMPORTED) says two modular forms of
   given weight and level that agree mod ℓ up to an explicit bound agree mod ℓ in every
   coefficient. With it, a finite kernel check proves a congruence between two forms. One
   application is instances of Serre's modularity conjecture, now the theorem of Khare and
   Wintenberger: for a residual representation the lab certifies, predict the weight and level
   by Serre's recipe, find a form there, and prove the predicted congruence by the Sturm check.
2. **A hypothesis structure for a Galois–automorphic match.** Define a Lean structure stating
   that a_p(E) equals the Hecke eigenvalue λ_p(f) for every good prime p. Prove its consequences
   for specific E and f: the Hecke recursions for a_{p^k}, the mod-ℓ images, and congruences
   between curves. When the matching is proved for an instance (Stage 2), the consequences
   follow unconditionally.

**Excluded.** Analytic statements such as Sato–Tate equidistribution, non-vanishing of
L-functions, and zero statistics. The lab works in exact arithmetic without analysis.

## Order of work

| stage | deliverable | becomes PROVED or KERNEL | stays IMPORTED | prerequisite |
|---|---|---|---|---|
| 1.1–1.2 | uniqueness and the reducible case | `pseudochar_rep_unique`, `pseudochar_rep_reducible` | nothing new | none |
| 1.3–1.4 | finite fields, all cases | the goal theorem of Stage 1 | nothing new | 1.1–1.2 |
| 4.1 | Sturm congruences | per-pair congruence certificates | Sturm's theorem | modular-symbol coefficients |
| 2.1–2.3 | modularity of the 15 curves by Faltings–Serre | one certificate per curve | Livné / Faltings–Serre | the ρ̄₂ certificates |
| 3 | Drinfeld instances from finitely many places | per-curve certificates; Satake inputs | effective strong multiplicity one | §3.4 data |
| 4.2 | match hypothesis and its consequences | conditional theorems per curve | the match, until Stage 2 supplies it | 2.3 |
| 2.4 | open cases over ℚ(i) or in genus 2 | instance proofs of conjectural statements | the method's criteria | a new automorphic oracle |

Stage 1 is entirely within reach and removes imports rather than adding them, so it comes
first. Stage 2.4 is the only place where the lab would prove a statement no general theorem
covers. It depends on everything before it and on new automorphic computations, so it comes
last.

## Discipline for every stage

- Each result lands in the dossier labelled COMPUTED, PROVED or IMPORTED, with every imported
  theorem named.
- Instance proofs name the exact object. None is described as proving "the conjecture".
- The axiom audit still allows only `propext` and `Quot.sound`, and the Lean gate still fails,
  never skips.
