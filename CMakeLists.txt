
cmake_minimum_required (VERSION 3.4)
project(Crawler)
set(CRAWLER_VERSION_MAJOR 0)
set(CRAWLER_VERSION_MINOR 1)

configure_file(
  "${PROJECT_SOURCE_DIR}/crawler_config.h.in"
  "${PROJECT_BINARY_DIR}/crawler_config.h"
)
include_directories(${PROJECT_BINARY_DIR})
include_directories("${PROJECT_SOURCE_DIR}/include")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -Wall)

add_executable(crawler src/main.cpp)

enable_testing()
add_subdirectory("${PROJECT_SOURCE_DIR}/test")