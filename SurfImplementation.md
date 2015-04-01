## Code location ##

  * image/blob\_response.h - Hessian response (interest point detection).
  * image/integral\_image.h - The summed-area-table.
  * image/non\_maximal\_suppression.h - Find local maxima in an Array3Df.

#### Stuff that's not finished ####

  * image/surf.h - Overall algorithm; calls other pieces. Does interest point detection at different scales but doesn't calculate descriptors.
  * image/surf\_description.h - (not started) Calculate a surf description given an image, scale, and location.
  * image/kdtree.h - (not started) N-dimensional matching. May switch to LSH, depending.