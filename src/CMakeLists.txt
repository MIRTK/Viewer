project(rview_src)

set(RVIEW_INCLUDES
	../include/Color.h
	../include/ColorRGBA.h
	../include/Contour.h
	../include/LookupTable.h
	../include/RView.h
	../include/RViewConfig.h
	../include/Viewer.h
	../include/HistogramWindow.h
	../include/Segment.h
	../include/SegmentTable.h
	../include/VoxelContour.h
)

set(RVIEW_SRCS
	Color.cc
	ColorRGBA.cc
	LookupTable.cc
	RView.cc
	RViewConfig.cc
	Viewer.cc
	HistogramWindow.cc
	Segment.cc
	SegmentTable.cc
	VoxelContour.cc
)

add_library(rview++ ${RVIEW_SRCS})
target_include_directories(rview++ 
	PUBLIC "${MIRTK_INCLUDE_DIRS}" "${VTK_INCLUDE_DIRS}"
)
target_link_libraries(rview++ fltk fltk_gl)

install_files(/include FILES ${RVIEW_INCLUDES})
