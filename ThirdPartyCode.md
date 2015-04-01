## Importing new third\_party code ##

  1. Make sure the license is compatible. In particular, it cannot be GPL-incompatible (because libmv will be bundled with blender eventually). This means Apache, GPL3, among others, are incompatible.
  1. Email the list to ask before adding it!
  1. Create a directory for it under 'third\_party/'; for example '`flens/`'.
  1. Copy only the relevant parts of the code for the project. For example, with FLENS, only the source under the `flens` directory in the FLENS distribution was include (not examples, tutorials, etc).
  1. Create a `README.libmv` file which follows the below template:
```
Project: FLENS
URL: http://flens.sourceforge.net/
License: New BSD
Upstream version: svn r1234, or cvs @ date ..., or version 1.2.6.
Local modifications: None.
```
  1. Make sure there is a `LICENSE` file with the terms of the license. If there isn't one, find the relevant license text and put it in the file `LICENSE`.
  1. Check the files in.
    * **It is important to check in a pristine version of the upstream sources for creating patches.**
  1. Create a `CMakeLists.txt` that builds the relevant files.
    * This may involve editing the source. If it does, update the `README.libmv`.
  1. Check in the `CMakeLists.txt`, and (if any) updates to `README.libmv` and the sources.

## Modifying third\_party code ##

Any time you modify third party code, update `README.libmv`. If you are adding new functionality add unit tests covering the added functionality. _Yes, add tests for third\_party libraries_! If the third party library has a testing framework, use that. Otherwise use libmv's simple testing framework.

Example:
```
Project: FLENS
URL: http://flens.sourceforge.net/
License: New BSD
Upstream version: svn r1234, or cvs @ date ..., or version 1.2.6.
Local modifications:

Extended TinyMatrix support so it has a more convenient API.

Previous local modifications (adding better SVD) were merged upstream in r1230.
```