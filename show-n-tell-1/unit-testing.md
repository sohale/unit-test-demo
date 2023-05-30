
# Unit Testing: How & Why

## Why (motivation)
<!-- Managing complexity and difficulty.-->
Human nature: Errors are normal
<!-- give Disciplines to  -->
<!-- a bit of push? -->

Human nature: Errors are normal
Humans under stress
Lump of complexity
Large projects growth:
* scaling up the growth
* Sustainable growth

Verification: Other types versus Unit Tests
Quality? Non-primacy of Quality: Quality is not Primary

Motivation is: Make future changes easier (facilitate)

Change: ☥
## How (with live coding) (technical): part 1
Case 1: Algorithm: Prime numbers


Writing code for an algorithm (Prime numbers)
* Iterative (invariant)
* Continuous (CI: small modificaitons .gradual)
<!-- * CI: communication: merge contiually -->
* Imperfection first: Load balancing in time !
* Auto-maintainer (also: pivot for change )
TDD
* Green-red: refactoring
* Interface first
* Separating interface from implementation details
* Decomposing (DoF × +): finding the boundaries to modularise


## History & Context

QA (Quality, QA teams, pre-2000)

* Kent Beck (and consequences)
   * SUnit
   * XP
   * Agile (later)
* Refactoring
   * Start imperfect
   * Pragmatism
* TDD
* Some milestones: 2000,2005,2012
* DORA study

More objective assessment: DORA

Where to look:
* The XP book
* The Tidy First
* (The DORA report)
* The book "Accelerate"

## Best practices (how)
* The person who wrote the code should write tests
* As early as possible (A/C)
* Even before the code (TDD: Shift-left)
* Unseparable part of writing the code
* Refactoring
* Shapes the code
* Readability (communication)
* Separation of modules, parts, etc
   * Interface
* (Team dynamics) Pyramid

Pitfalls:
* too tight conditions (testing more)
* should be isolated
* impleemetation details
* Multiple-tests (Assertions)
* if far from dev time

The two schools
AAA style

### Why?
Why it works? / why this way? Seems magical.
* Curse of dimensionality

* Almost magic: Less cost, faster, ...
* IKEA example: Know earlier
* Detachable parts
* Offloading from QA

* accumulation of constriants

* "Scientific", "Causality"
## Personal observations (in my career)
### Observations in past companies
* Helping avoid crashing
* Helping in costs
* Scaling up better practices in software, team work
### From discussions with experienced people
* Spoken to people I know. Checked with people.
* Videos by
   * Dave Farley (videos and book)
   * Kent Beck
   * Lots of good videos about Unit Tests
   and bad ones
* Assessment
<!-- ?? maybe: from estimations? -->


## How (with live coding) (technical): part 2
ROS2-level Unit Tests
* Principle of separating the framework (from logic)
useful patterns
CMake structure (2 types)

### Appendix: Some proposed suggestions
* Separate QA for "software"
* Technical debt
* Coverage report
* Transition phase
* Affects planning
