# MIRTK Viewer

The companion viewer for MIRTK, originally known as `rview` as part of IRTK.

This project is currently a work-in-progress. The initial source code was
imported by subtree extraction of the IRTK git repository. Work is on-going
to make RView compatible with the current release of MIRTK.

Statically linked binaries for Ubuntu 14.04 or later and macOS can be downloaded from [bintray.com](https://bintray.com/schuhschuh/generic/MIRTKViewer). Save the `view` binary to the directory
containing the other MIRTK commands. To determine this directory, run the following command
```
mirtk -v info -version | head -n1 | cut -d' ' -f2 | xargs dirname
```
Given the default `CMAKE_INSTALL_PREFIX` of MIRTK, save the `view` binary to `/opt/mirtk/lib/tools`.
This file need further be marked as executable by setting the executable permissions bit, i.e.,
```
chmod a+x /opt/mirtk/lib/tools/view
```
The view command is already included in the [MIRTK+view-latest-x86_64-glibc2.15.AppImage](https://bintray.com/schuhschuh/AppImages/download_file?file_path=MIRTK%2Bview-latest-x86_64-glibc2.15.AppImage)
for Linux.
