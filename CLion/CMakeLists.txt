cmake_minimum_required(VERSION 4.0)
project(CLion)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CLion
        1.cpp
        README.md)
