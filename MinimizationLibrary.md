# Introduction #

A general sparse minimizer is one of the most important components of any reconstruction system. Reconstruction can be viewed as a two step problem:

  1. Cleverly determine an initial reconstruction, which is essentially a 'close' solution to the equation `f(x) = 0`.
  1. Solve the minimization problem `min`<sub>x</sub> `||f(x)||`, where the function `f(x)` is a vector function of tens of thousands of elements, but each element only depends on a small subset of the elements of `x`.

Generally, a sparse variant of the Levenberg-Marquardt algorithm is used to minimze the system.

As part of this minimization, it is necessary to solve a sparse symmetric linear system. For a comparison of libraries for this task, see
[this comparison of sparse, symmetric solvers](ftp://ftp.numerical.rl.ac.uk/pub/reports/ghsRAL200505.pdf). [TAUCS](http://www.tau.ac.il/~stoledo/taucs/) looks like a reasonable choice, because it is liberally licensed.

In libmv1, [Sparse Bundle Adjustment](http://www.ics.forth.gr/~lourakis/sba/) was used. Unfortunately, SBA is limited to cost functions with a particular structure (one kind of cameras and one kind of structure), and does not allow for the common situation of bundling a common focal length across all cameras.

Another project, [Google C++ Pose Optimizer](http://code.google.com/p/gpo), looks promising (it is for solving a large sparse nonlinear system) but fails because the sparsity structure is fixed, as with SBA. However, it does have a better license (apache).

**Update: We have chosen SSBA as our bundler for now, until something more general comes along. It is in `third_party/ssba`.**

## Value to other projects ##

A general sparse minimizer will be useful in many other projects. We should try to have no dependencies beyond our matrix/vector classes and a sparse minimization system.

# Conclusion #

We implement our own. I (keir) have already started one and plan on integrating it soon.