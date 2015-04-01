# Introduction #

There are many different methods for reconstruction; here one complete method is described, with references to specific components inside libmv. It is similar in flavor to [that](http://www.inf.ethz.ch/personal/pomarc/pubs/PollefeysIJCV04.pdf) used by [Pollefeys](http://www.inf.ethz.ch/personal/pomarc/), though here we move to a metric frame immediately. The task here is to recover a sparse reconstruction for matchmoving. The reconstruction is only points and cameras.

  1. Find correspondences between frames; this is a purely 2D process.
    * KLT algorithm is the current method of choice.
    * Uses components from `correspondence/`.
  1. Find a pair of images which produce a 'stable' metric reconstruction, by using Hartley's method to recover the focal lengths from the fundamental matrix.
    * This involves doing model comparison between a normal homography and a more complex model like the fundamental matrix until the more complex model fits better.
    * Uses components from `multiview/`.
  1. Resection cameras that can see the reconstructed points. (`multiview/`)
  1. Triangulate new points that can be seen by the new cameras. (`multiview/`)
  1. Go back to step 2, and repeat until all cameras are recovered.
  1. Perform bundle adjustment along the way. (`minimization/`)
  1. Output to blender or other useful format.

This is about the simplest method that will work.