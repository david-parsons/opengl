#ifndef OPENGL_USERINTERFACE_H
#define OPENGL_USERINTERFACE_H

#include <GL/glut.h>

#include <string>
#include <vector>

using std::string;
using std::vector;

class UserInterface {
 public:
  UserInterface() = delete; // Default ctor
  UserInterface(const UserInterface&) = delete; // Copy ctor
  UserInterface(UserInterface&&) = delete; // Move ctor
  UserInterface& operator=(const UserInterface&) = delete; // Assign
  UserInterface& operator=(UserInterface&&) = delete; // Move assign
  ~UserInterface() = delete;

  static void Init(int argc, char* argv[], const string&);
  static void MainLoop();

 protected:
  static void Display();
  static void DrawPlanes();
  static void Reshape(int w, int h);
  static void SetCamera();
  static void MouseButtonHandler(GLint button, GLint state, GLint x, GLint y);
  static GLvoid MouseMotionHandler(GLint x, GLint y);


  static GLfloat twist_;
  static GLfloat incidence_;
  static GLfloat azimuth_;
  static GLfloat distance_;

  enum actions{MOVE_EYE, TWIST_EYE, ZOOM, MOVE_NONE};
  using mouseInfo = struct {
    GLint action;
    GLdouble x0;
    GLdouble y0;
  };
  static mouseInfo mouse_;
};

#endif //OPENGL_USERINTERFACE_H
