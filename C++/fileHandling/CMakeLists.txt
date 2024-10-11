cmake_minimum_required(VERSION 3.29)
project(fileHandling)

set(CMAKE_CXX_STANDARD 26)

add_executable(fileHandling main.cpp)

set(CMAKE_EXE_LINKER_FLAGS "-static")  