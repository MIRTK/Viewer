find_package(FLTK REQUIRED NO_MODULE)
cmake_minimum_required(VERSION 3.9)

find_package(VTK)

find_package(MIRTK REQUIRED
	PointSet
	Common 
	Numerics 
	IO 
	Image 
	Transformation 
	Registration
)

include(MIRTKTargets)

find_package(OpenGL)

find_package(GLUT)

include_directories(${FLTK_INCLUDE_DIRS})

if (BUILD_MPI_EXE)

else (BUILD_MPI_EXE)

  include_directories(${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/fltk)

  subdirs(src fltk glut)

endif (BUILD_MPI_EXE)
