#include <stdexcept>

#include <gtest/gtest.h>

#include "calc.hpp"

TEST(CalcTest, Add) {
  EXPECT_DOUBLE_EQ(add(0, 0), 0);
}