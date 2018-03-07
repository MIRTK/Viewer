# MIRTK Viewer

The companion viewer for MIRTK, originally known as `rview` as part of IRTK.

# Status

This builds against current MIRTK and VTK, but is not yet tested.

# Building

```
$ cd Viewer
$ mkdir build
$ cd build
$ cmake -D CMAKE_MODULE_PATH:PATH=$MIRTK_ROOT/lib/cmake/mirtk ..
$ make
```

