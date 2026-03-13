cmake_minimum_required(VERSION 3.5)

project(TP_calculator)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES src/main.cpp src/calc.cpp)

set(HEADERS include/calc.hpp)

add_executable(calc ${SOURCES} ${HEADERS})
target_include_directories(calc PRIVATE include)