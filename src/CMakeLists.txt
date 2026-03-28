add_library(calc_lib calc.cpp)

target_include_directories(calc_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(calc main.cpp)

target_link_libraries(calc PRIVATE calc_lib)