project(RVIEW_GLUT)

set(SRCS main.cc)

add_executable(display ${SRCS})

# mirtk::LibGeometry
# mirtk::LibRecipes
target_link_libraries(display 
	rview++ 
	mirtk::LibCommon 
	mirtk::LibRegistration
	mirtk::LibTransformation
	mirtk::LibImage
	${GLUT_glut_LIBRARY}
	${OPENGL_glu_LIBRARY}
	${OPENGL_gl_LIBRARY}
)

install_targets(/bin display)
