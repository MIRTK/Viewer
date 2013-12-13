IF (BUILD_MPI_EXE)

ELSE (BUILD_MPI_EXE)

  INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/packages/rview/include ${CMAKE_SOURCE_DIR}/packages/rview/fltk)

  SUBDIRS(src fltk glut)

ENDIF (BUILD_MPI_EXE)
