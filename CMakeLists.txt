cmake_minimum_required(VERSION 3.22.1)

project(beda VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

FILE(GLOB parsers src/parsers/verilog/generated/*.cpp src/parsers/verilog/*.cpp)
FILE(GLOB database src/database/*.cpp)

add_executable(beda src/beda.cpp ${database} ${parsers})
target_link_libraries(beda antlr4-runtime)
include_directories(/usr/local/include/antlr4-runtime)
