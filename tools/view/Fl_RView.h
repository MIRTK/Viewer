/*
 * Medical Image Registration ToolKit (MIRTK)
 *
 * Copyright (c) Imperial College London
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _FL_RVIEW_H
#define _FL_RVIEW_H

#include <mirtk/OpenGl.h>

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Gl_Window.H>

#include <mirtk/RView.h>


class Fl_RView : public Fl_Gl_Window
{

public:

  /// Pointer to the registration viewer
  RView *v;

  /// Constructor
  Fl_RView(int, int, int, int, const char *);

  /// Default draw function
  void draw();

  /// Default function to handle events
  int  handle(int);

};

#endif
