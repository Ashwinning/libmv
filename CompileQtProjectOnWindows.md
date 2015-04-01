# Introduction #

Some project in libmv have a Graphical interface (TVR, Nview).
This Graphical Interface use the Qt library from Nokia (http://qt.nokia.com/).


# Details #

First you have to download the Qt libraries and source code for your compiler.

visual studio 2008 => http://qt.nokia.com/downloads/windows-cpp-vs2008

If you use another compiler you have to download the source and compile Qt by yourself : http://qt.nokia.com/downloads/sdk-windows-cpp

Once Qt is installed on your machine at the location QTPATH => example C:/lib/Qt

You could configure the CMake build system to use Qt.

  1. Edit the libmv/src/CMakeList.txt and comment NOT WIN32 things like the following :
```
  #IF (NOT WIN32)
    ADD_SUBDIRECTORY(ui)
  #ENDIF (NOT WIN32)
```
  1. In the CMakeGui interface edit the variable path QT\_QMAKE\_EXCUTABLE with yours :
> > C:/lib/Qt/bin/qmake.exe
  1. Run Configure, Generate.
  1. Compile your visual project file. (named tvr, nview)

That's all.