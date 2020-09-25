#ifdef __APPLE__
  #include <OpenGl/gl.h>
  #include <OpenGl/glu.h>
#else
  #ifdef _WIN32
    #define NOMINMAX
    #include <windows.h>
  #endif
  #include <GL/gl.h>
  #include <GL/glu.h>
#endif
