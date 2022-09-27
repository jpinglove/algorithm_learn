cmake_minimum_required(VERSION 3.23)
project(untitled)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_FLAGS -m32)
set(CMAKE_CXX_FLAGS -m32)

add_executable(untitled main.cpp Test.cpp Test.h LinkedTest.cpp LinkedTest.h Sorter.cpp Sorter.h)
