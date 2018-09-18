project(rview_src)

set(RVIEW_INCLUDES
	../include/irtkColor.h
	../include/irtkColorRGBA.h
	../include/irtkContour.h
	../include/irtkLookupTable.h
	../include/irtkRView.h
	../include/irtkRViewConfig.h
	../include/irtkViewer.h
	../include/irtkHistogramWindow.h
	../include/irtkSegment.h
	../include/irtkSegmentTable.h
	../include/irtkVoxelContour.h
)

set(RVIEW_SRCS
	irtkColor.cc
	irtkColorRGBA.cc
	irtkLookupTable.cc
	irtkRView.cc
	irtkRViewConfig.cc
	irtkViewer.cc
	irtkHistogramWindow.cc
	irtkSegment.cc
	irtkSegmentTable.cc
	irtkVoxelContour.cc
)

add_library(rview++ ${RVIEW_SRCS})
target_include_directories(rview++ 
	PUBLIC "${MIRTK_INCLUDE_DIRS}" "${VTK_INCLUDE_DIRS}"
)
target_link_libraries(rview++ fltk fltk_gl)

install_files(/include FILES ${RVIEW_INCLUDES})
