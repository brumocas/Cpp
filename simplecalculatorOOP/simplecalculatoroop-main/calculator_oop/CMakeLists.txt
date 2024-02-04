cmake_minimum_required(VERSION 3.16)
project(calculator_oop)

set(CMAKE_CXX_STANDARD 17)

add_executable(calculator_oop src/main.cpp
        src/logic/Calculator.cpp
        include/logic/Calculator.h
        src/interaction/user.cpp
        include/interaction/user.h
        src/main.cpp
        src/logic/AdvancedCalculator.cpp
        include/logic/AdvancedCalculator.h
)
