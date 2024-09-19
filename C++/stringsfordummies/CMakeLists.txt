cmake_minimum_required(VERSION 3.29)
project(stringsfordummies)

set(CMAKE_CXX_STANDARD 26)

add_executable(stringsfordummies main.cpp
        dummies.cpp
        dummies.h)
