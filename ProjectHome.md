**LIBMV NOW BLENDER'S MATCHMOVING BACKEND! SEARCH FOR BLENDER TOMATO ON YOUTUBE**

**Currently libmv is only for developers interested in contributing, because it is undergoing a rewrite.**

**NOTE:** Our code is now hosted on github: https://github.com/libmv/libmv

## Introduction ##

**libmv** is a structure from motion library, which plans to one day take raw video footage or photographs, and produce full camera calibration information and dense 3D models.

### Application 1: Matchmoving ###
The first targeted application for libmv is to integrate with Blender to make the first open source matchmoving solution. Other matchmoving programs include [Andersson's SynthEyes](http://www.ssontech.com/), [2d3's Boujou](http://www.2d3.com/), [RealViz MatchMover](http://sfx.realviz.com/Autodesk/), [Voodoo Tracker](http://www.digilab.uni-hannover.de/docs/manual.html), [PFTrack by The Pixel Farm](http://www.thepixelfarm.co.uk/), [3D-Equalizer by Science-D-Visions](http://www.sci-d-vis.com/), [Scenespector's VooCAT](http://www.scenespector.com/), among others. A  high-profile application of structure-from-motion is [Microsoft's Photosynth](http://labs.live.com/photosynth/), which recently [released their SfM source code as GPL](http://phototour.cs.washington.edu/bundler/).

#### Matchmoving example ####

Here's a sequence that was matchmoved with libmv1: [input video](http://www.youtube.com/watch?v=RhEHJLTno5Q), [2D tracking with UKLT](http://www.youtube.com/watch?v=dBT5d6ndmuQ) (unfortunately it's impossible to see the track markers with the compression), [Suzanne added with blender](http://www.youtube.com/watch?v=hswISipCv2M).

Note that the old version is finicky, so this example required careful tweaking to successfully track.

### Application 2: Unordered images reconstruction and dense 3D models ###

The second application would be to localize unordered images and provide dense 3D models. Some open source but limited software already propose more or less these functionalities  [Bundler](http://phototour.cs.washington.edu/bundler), [Photosynth](http://photosynth.net), [Pmvs](http://grail.cs.washington.edu/software/pmvs), etc.

## Functionality overview ##

Libmv has now various Structure-from-Motion algorithms, see our [Modules Descriptions](http://code.google.com/p/libmv/wiki/StartingGuide) page.


## Developers needed! ##
If you're a developer interested in helping, please [join the list](http://groups.google.com/group/libmv-devel)! There are lots of things to work on depending on preferences and skillset.
  * Any help on the 2D tracking and Structure-from-Motion algorithms are welcomed! See our [Roadmap](Roadmap.md).
  * Someone with Qt experience who's interested in making a basic GUI could make a big difference to the project.

  * If you make a patch, please [make a code review for it on Rietvelt](http://codereview.appspot.com) and mail it to the list.


## IRC ##
We have our IRC channel on [Freenode](http://freenode.net/): see you on #libmv!

## News! ##

### Libmv 0.1 Released ###
Libmv 0.1 is out!
This beta version brings a huge amount of work with various functions and tools.
Take a look at the impressive [ChangeLog](ChangeLog.md).

You can [download](http://code.google.com/p/libmv/downloads/list) archives of the source code and binaries (for Linux/Windows, x86 platform).

We still have a lot of improvements to do for the 1.0 stable release (see the [Roadmap](Roadmap.md)) and if you want to help us, feel free to [propose your contribution](http://groups.google.com/group/libmv-devel)!


### Libmv Google Summer of Code 2011 ###

Libmv has not been accepted to GSoC this year, but the GSoC ideas [GSoC2011](GSoC2011.md) remain valid! If you are motivated to do some great Structure-from-Motion applications in libmv, feel free to [contact us](http://groups.google.com/group/libmv-devel)!