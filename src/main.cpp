#include <cstdlib>

#include <iostream>

#include "UserInterface.h"

using std::cout;
using std::endl;

int main(int argc, char* argv[]) {

  UserInterface::Init(argc, argv, "TP OpenGL");

  UserInterface::MainLoop();

  return EXIT_SUCCESS;
}
