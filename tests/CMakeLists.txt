add_executable(test_calc test_calc.cpp)

target_link_libraries(test_calc PRIVATE calc_lib GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(test_calc)