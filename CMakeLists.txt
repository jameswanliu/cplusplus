cmake_minimum_required(VERSION 3.15)
project(cplusplus_base)

set(CMAKE_CXX_STANDARD 14)

add_executable(cplusplus_base main.cpp)
add_executable(duotai duotai/duotai.cpp)
add_executable(string string/teststring.cpp)
add_executable(template template/template.cpp)
add_executable(const const/const_summed_up.cpp)