### KLT ###
  * [An implementation in C.](http://www.ces.clemson.edu/~stb/klt/)
  * J. Shi and C. Tomasi.  Good Features to Track.  In IEEE Conference on Computer Vision and Pattern Recognition, pages 593-600, 1994. ([PDF](http://www.ces.clemson.edu/~stb/klt/shi-tomasi-good-features-cvpr1994.pdf))

### Multiview Geometry ###
  * R. I. Hartely and A. Zisserman.  Multiple View Geometry in Computer Vision.  Second Edition.  Cambridge University Press, ISBN: 0521540518, 2004.
  * Paper on [automatic differentiation](http://homepage.mac.com/sigfpe/paper.pdf), which we may want to implement in Eigen.

### Focal Length Estimation ###
  * R. I. Hartley.  Extraction of focal lengths from the fundamental matrix.  Technical Repport, 1993 ([PDF](http://axiom.anu.edu.au/~hartley/Papers/focal-lengths/focal.pdf))
  * P. Sturm, Z.L. Cheng, P.C.Y. Chen and A.N. Poo.  Focal length calibration from two views: method and analysis of singular cases.  Computer Vision and Image Understanding, Volume 99, [Issue 1](https://code.google.com/p/libmv/issues/detail?id=1), July 2005, Pages 58-95 ([PDF](http://perception.inrialpes.fr/Publications/2005/SCCP05/SturmZhengChenPoo-cviu05.pdf))
  * H. Stewénius, D. Nistér, F. Kahl and F. Schaffalitzky.  A Minimal Solution for Relative Pose with Unknown Focal Length.  CVPR 2005.  ([PDF](http://cmp.felk.cvut.cz/~martid1/articles/Martinec-CVPR2007.pdf))
  * [Estimating the focal length of a photo from EXIF tags](http://phototour.cs.washington.edu/focal.html), by Noah Snavely.
  * J. Repko, M. Pollefeys. [3D Models from Extended Uncalibrated Video Sequences: Addressing Key-frame Selection and Projective Drift](http://www.cs.unc.edu/~marc/pubs/Repko3DIM05.pdf).

### Reconstruction Registration ###
  * D. Martinec and T. Pajdla. Robust Rotation and Translation Estimation in Multiview Reconstruction. CVPR 2007. ([PDF](http://cmp.felk.cvut.cz/~martid1/articles/Martinec-CVPR2007.pdf), [web](http://cmp.felk.cvut.cz/~martid1/demoCVPR07/))
  * Jun Liu and Roger Hubbold International Symposium on Visual Computing (ISVC'06) ([PDF](http://www.cs.man.ac.uk/~liuja/pubs/2006/isvc-b/liu06b.pdf)).
  * Noah Snavely, Steven M. Seitz, Richard Szeliski : Skeletal Sets for Efficient Structure from Motion (CVPR 2008). [project page](http://www.cs.cornell.edu/~snavely/projects/skeletalset/)

### Dense reconstruction ###
  * C. Zach, M. Sormann, and K. Karner.  High-performance multi-view reconstruction.  In International Symposium on 3D Data Processing, Visualization and Transmission (3DPVT), 2006 ([PDF](http://www.icg.tugraz.at/Members/zach/my_publications/3dpvt2006a.pdf))

### Camera resectioning ###

  * A. Ansar, K. Daniilidis, "Linear Pose Estimation from Points or Lines," IEEE Trans. Pattern Analysis and Machine Intelligence, 25: 578-589, 2003, ([PDF](http://www-robotics.jpl.nasa.gov/publications/Adnan_Ansar/ansar&daniilidis03pami.pdf))
  * Horn B. K. P.: Closed-form solution of absolute orientation using unit quaternions. Journal of the Optical Society of America 4, 4 (1987).([PDF](http://people.csail.mit.edu/bkph/papers/Absolute_Orientation.pdf))
  * V. Lepetit, F. Moreno-Noguer and P. Fua, EPnP: An Accurate O(n) Solution to the PnP Problem, IJCV 2009. vol. 81, no. 2 ([PDF](http://cvlab.epfl.ch/~lepetit/papers/lepetit_ijcv08.pdf))