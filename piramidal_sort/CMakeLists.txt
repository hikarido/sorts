project(piramidal_sort)
cmake_minimum_required(VERSION 3.0)
add_compile_options(-std=c++14)

set(HEADERS piramidal_sort.hpp)
set(SOURCES piramidal_sort.cpp)

set(SOURCE_EXE main.cpp)

add_executable(piramidal_sort ${SOURCE_EXE} ${HEADERS} ${SOURCES})
