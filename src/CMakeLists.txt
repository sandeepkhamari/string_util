cmake_minimum_required(VERSION 3.15)
add_library(str_util STATIC str_util.cpp)

message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")

# use this and dont include the headers in test CMakeLists.txt
#target_include_directories(str_util PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(str_util PRIVATE ${CMAKE_SOURCE_DIR}/include)
