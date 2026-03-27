cmake_minimum_required(VERSION 3.10)

project(TP_calculator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(calc_lib src/calc.cpp)
target_include_directories(calc_lib PUBLIC include)

add_executable(calc src/main.cpp)
target_link_libraries(calc PRIVATE calc_lib)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_subdirectory(tests)