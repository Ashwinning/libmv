// Copyright (c) 2009 libmv authors.
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.

#ifndef LIBMV_MULTIVIEW_HOMOGRAPHY2_KERNEL_H_
#define LIBMV_MULTIVIEW_HOMOGRAPHY2_KERNEL_H_

#include "libmv/base/vector.h"
#include "libmv/multiview/projection.h"
#include "libmv/multiview/two_view_kernel.h"
#include "libmv/numeric/numeric.h"

namespace libmv {
namespace panography {
namespace kernel {
  
struct TwoPointSolver {
  enum { MINIMUM_SAMPLES = 2 };
  
  static void Solve(const Mat &x1, const Mat &x2, vector<Mat3> *Hs);
};

// Should be distributed as Chi-squared with k = 2.
struct AsymmetricError {
  static double Error(const Mat &H, const Vec2 &x1, const Vec2 &x2) {
    Vec3 x2h_est = H * EuclideanToHomogeneous(x1);
    Vec2 x2_est = x2h_est.start<2>() / x2h_est[2];
    return (x2 - x2_est).squaredNorm();
  }
};

// Should be distributed as Chi-squared with k = 4.
struct SymmetricError {
  static double Error(const Mat &H, const Vec2 &x1, const Vec2 &x2) {
    // TODO(keir): This is awesomely inefficient because it does a 3x3
    // inversion for each evaluation. 
    Mat3 Hinv = H.inverse();
    return AsymmetricError::Error(H,    x1, x2) +
           AsymmetricError::Error(Hinv, x2, x1);
  }
};

// Denormalize the results. See HZ page 109.
struct Unnormalizer {
  static void Unnormalize(const Mat3 &T1, const Mat3 &T2, Mat3 *H) {
    *H = T2.inverse() * (*H) * T1;
  }
};

// TODO(keir): Add error based on ideal points.

typedef two_view::kernel::Kernel<TwoPointSolver, AsymmetricError, Mat3>
  UnnormalizedKernel;

// By default use the normalized version for increased robustness.
typedef two_view::kernel::Kernel<
    two_view::kernel::NormalizedSolver<TwoPointSolver, Unnormalizer>,
    AsymmetricError,
    Mat3>
  Kernel;

}  // namespace kernel
}  // namespace panography
}  // namespace libmv

#endif //LIBMV_MULTIVIEW_HOMOGRAPHY2_KERNEL_H_
