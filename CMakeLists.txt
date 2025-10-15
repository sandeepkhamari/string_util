cmake_minimum_required(VERSION 3.15)
project(string_util)
#add_executable(str_util src/str_util.cpp)
add_subdirectory(src)
add_subdirectory(test)

enable_testing()
#include(CTest)
