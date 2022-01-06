cmake_minimum_required(VERSION 3.21)
project(screw_engine)

set(CMAKE_CXX_STANDARD 20)

find_package(SDL2 REQUIRED)
find_package(OpenGL REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
include_directories(${OPENGL_INCLUDE_DIRS})

add_subdirectory(external)

add_executable(screw_engine main.cpp engine.cpp gui.cpp gui.h)

target_link_libraries(screw_engine ${SDL2_LIBRARIES} ${OPENGL_LIBRARIES} ImGui)