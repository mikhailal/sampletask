cmake_minimum_required(VERSION 3.10)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)
add_compile_options("-O2")
add_executable(untitled1 main.cpp storage.cpp storage.h solver.h)
