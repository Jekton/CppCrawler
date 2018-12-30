
cmake_minimum_required (VERSION 2.6)
project(Crawler)
set(CRAWLER_VERSION_MAJOR 0)
set(CRAWLER_VERSION_MINOR 1)

configure_file(
  "${PROJECT_SOURCE_DIR}/crawler_config.h.in"
  "${PROJECT_BINARY_DIR}/crawler_config.h"
)
include_directories(${PROJECT_BINARY_DIR})

set(SOURCE_FILES ${SOURCE_FILES} src/main.cpp)

add_executable(crawler ${SOURCE_FILES})