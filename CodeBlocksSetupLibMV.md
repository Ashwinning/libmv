## Introduction ##

[CodeBlocks](http://www.codeblocks.org/) is an IDE for cross-platform development with integrated editor, debugger and control of the gcc/g++ build process. This page describes how to setup a CodeBlocks project for libmv development work.

## Details ##

The procedure is fairly straightforward. It assumes you have the necessary development tools required to build libmv (gcc, cmake, _etc._), and have CodeBlocks installed (I'm doing this with CodeBlocks 8.02 and cmake 2.6-patch 2, but this procedure likely works with other versions as well). Earlier versions of cmake may not have the CodeBlocks generator support.

  1. Check out libmv using SVN.
  1. cd to the root directory for the libmv codebase (the directory with the AUTHORS, README, _etc._ files, and most importantly the src/ subdirectory containing libmv's source code).
  1. Type `cmake -G "CodeBlocks - Unix Makefiles" src/`. This should generate a file LIBMV.cbp which is a CodeBlocks project file.
  1. Start CodeBlocks by either typing "codeblocks LIBMV.cbp" from the directory of step 2, or run CodeBlocks, select File -> Open and navigate to the directory with LIBMV.cbp and select it.
  1. Select Build -> Build (or click the gear icon on the toolbar), and (with a little luck) libmv should build without any errors.