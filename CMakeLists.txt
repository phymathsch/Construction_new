cmake_minimum_required(VERSION 3.15)
project(Construction_new)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Construction_new
        Brique.cpp
        Brique.h
        Construction.cpp
        Construction.h
        main.cpp)
