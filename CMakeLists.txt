cmake_minimum_required(VERSION 3.22.1)

project(beda VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_executable(beda src/beda.cpp src/database/bl_library.cpp)