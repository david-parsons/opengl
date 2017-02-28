cmake_minimum_required(VERSION 3.0.2)
project(opengl)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

set(SOURCE_FILES
    src/main.cpp
    src/UserInterface.cpp src/UserInterface.h
    )
add_executable(opengl ${SOURCE_FILES})
target_include_directories(opengl PUBLIC ${GLUT_INCLUDE_DIR})
target_link_libraries(opengl ${OPENGL_LIBRARIES}  ${GLUT_LIBRARIES})
target_compile_options(opengl PRIVATE "-std=c++1y")
