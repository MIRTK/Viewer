PROJECT(RVIEW_FLTK)

SET(RVIEW_FLTK_SRCS
	Fl_Simple_Group.cc
	Fl_Simple_Browser.cc
	Fl_Value_Slider2.cc
	Fl_RView.cc
	Fl_RViewUI.cc
	Fl_RView_Landmark.cc
	Fl_RView_Registration.cc
	Fl_RView_Histogram.cc
	Fl_RView_Transformation.cc
	Fl_RView_Visualisation.cc
	Fl_RView_Segmentation.cc
	main.cc
)

add_executable(rview ${RVIEW_FLTK_SRCS})

# mirtk::LibGeometry
# mirtk::LibRecipes
target_link_libraries(rview
	rview++ 
	mirtk::LibCommon 
	mirtk::LibRegistration
	mirtk::LibTransformation
	mirtk::LibImage
	${GLU_LIBRARY}
	${OPENGL_LIBRARY}
)

install_targets(/bin rview)

if (APPLE_REZ AND FLTK_REZ_FILE)
  add_custom_command(TARGET rview
    POST_BUILD
    COMMAND ${APPLE_REZ}
    ARGS ${FLTK_REZ_FILE} -o ${EXECUTABLE_OUTPUT_PATH}/rview)
endif (APPLE_REZ AND FLTK_REZ_FILE)
