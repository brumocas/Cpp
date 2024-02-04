cmake_minimum_required(VERSION 3.26)
project(Test)

set(CMAKE_CXX_STANDARD 17)

add_executable(Test main.cpp
        src/Operation.cpp
        src/Operation.h
        test/test1.cpp
)
