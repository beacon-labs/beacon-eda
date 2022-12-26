cmake_minimum_required(VERSION 3.22.1)

project(beda VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Note: this example just pulls the head master branch
# for slang, but a real project would very likely pin
# this to a specific tag and only update when ready
# to accept a new version.
include(FetchContent)
FetchContent_Declare(
  slang
  GIT_REPOSITORY https://github.com/MikePopoloski/slang.git
  GIT_SHALLOW ON
  GIT_TAG v2.0)
FetchContent_MakeAvailable(slang)

FILE(GLOB database src/database/*.cpp)
FILE(GLOB parsers src/parsers/*/*.cpp)

# find_package(slang 2.0.208)

add_executable(beda src/beda.cpp ${database} ${parsers})
target_link_libraries(beda PRIVATE slang::slang)
