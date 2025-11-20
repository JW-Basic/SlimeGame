cmake_minimum_required(VERSION 3.10.0)
project(SlimeGame VERSION 0.1.0 LANGUAGES C CXX)

set(RAYLIB_DIR ${CMAKE_SOURCE_DIR}/../raylibBuildLib)
message(STATUS "RAYLIB_DIR is set to: ${RAYLIB_DIR}")

add_executable(SlimeGame main.cpp)
include_directories(${RAYLIB_DIR})
target_link_libraries(SlimeGame PRIVATE ${RAYLIB_DIR}/libraylib.a)

include(CTest)
enable_testing()

