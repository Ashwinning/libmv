To support stereo from wide baseline images (i.e. what a typical user would have when shooting from a handheld still camera rather than a video camera), libmv needs to have at least one strategy for wide baseline matching. There are several possibilities. The obvious one that everyone knows is SIFT, and is the most popular. There are several implementations. The others include SURF, DAISY, GLOH, and others.

  * SIFT - [libsiftfast](http://libsift.sourceforge.net/). Unclear license terms.
  * SIFT - [SIFT](http://vision.ucla.edu/~vedaldi/code/sift/sift.html). Pedagogical C implementation, not derived from Lowe's implementation.
  * SIFT - [SIFT++](http://vision.ucla.edu/~vedaldi/code/siftpp/siftpp.html). Faster version than the C one above, but still superceeded by VLFeat.
  * SIFT - [Rob Hess's implementation](http://web.engr.oregonstate.edu/~hess/index.html). Uses OpenCV. GPL'd.
  * SIFT - [OpenCV based C++ library](http://www.cs.wustl.edu/~rstancha/oss.php). License unclear. Unmaintained.
  * SIFT - [iLab Neuromorphic Vision C++ Toolkit](http://ilab.usc.edu/toolkit/home.shtml) has an implementation. GPL'd.
  * SIFT - [JIFT](http://www.cs.man.ac.uk/~liuja/). Unclear license terms.
  * Affine-SIFT - [ASIFT](http://mw.cmla.ens-cachan.fr/megawave/algo/asift/) Support large viewpoint. But it take more times rather than a single SIFT extraction (the cost is 2.25 x SIFT).
  * SURF - [OpenSURF](http://jmkirby.co.uk/index.html). GPL, based on OpenCV.
  * DAISY - [daisy-1.3](http://cvlab.epfl.ch/research/surface/dense_matching/). GPL, original. This is pretty promising. The algorithm doesn't look too hard to implement; conceivably it could be reimplemented from [the paper (pdf)](http://cvlab.epfl.ch/publications/publications/2008/TolaLF08.pdf).
  * [VLFeat](http://www.vlfeat.org/) - A library with many common matching algorithms. This would be great, but is GPL.

**As of March 2009, libmv has an original SURF implementation. The components are reusable and can be swapped in and out with other detectors as well.**

### Approximate nearest neighbour matching ###

Traditionally best-bin-first kdtrees are used for this, but increasingly LSH is used.

  * [lshkit](http://code.google.com/p/lshkit/) is a GPL'd LSH implementation, but it appears to be more research focused and not yet mature.
  * [ANN](http://www.cs.umd.edu/~mount/ANN/) is LGPL'd, but not particularly fast. It is probably sufficient for now and can be replaced later.
  * [Spill Trees (pdf)](http://books.nips.cc/papers/files/nips17/NIPS2004_0187.pdf) - Similar to kdtrees but uses a margin instead of a splitting plane, where points go on both sides. Has performance similar to LSH but is simple to implement.