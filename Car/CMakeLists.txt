# Specify the minimum version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Car)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
set(SOURCES
        main.cpp
        car.cpp
        ElectricCar.cpp
)

# Add header files
set(HEADERS
        car.h
        ElectricCar.h
)

# Add an executable target
add_executable(my_car_project ${SOURCES} ${HEADERS})
