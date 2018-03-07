# MIRTK Viewer

The companion viewer for MIRTK, originally known as `rview` as part of IRTK.

# Status

This builds against current MIRTK and VTK and can at least load and display
`nii.gz` volumes. Not much else has been tested yet. 

# Building

```
$ cd Viewer
$ mkdir build
$ cd build
$ cmake -D CMAKE_BUILD_TYPE=Debug -D CMAKE_MODULE_PATH:PATH=$MIRTK_ROOT/lib/cmake/mirtk -D CMAKE_INSTALL_PREFIX:PATH=$MIRTK_ROOT ..
$ make
```

