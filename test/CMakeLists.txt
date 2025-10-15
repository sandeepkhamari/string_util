cmake_minimum_required(VERSION 3.15)
add_executable(test_str_util test_str_util.cpp)

#enable testing
enable_testing()

#ctest
#include(CTest)
include(GoogleTest)

target_link_libraries(test_str_util PUBLIC str_util /usr/lib/libgtest.a /usr/lib/libgtest_main.a)

#add_test(NAME test_ctest COMMAND test_str_util)

gtest_discover_tests(test_str_util)
