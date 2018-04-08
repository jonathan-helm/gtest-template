#include "gtest/gtest.h"
#include "PROGRAM.h"

TEST(basic_tests, test_eq) {
    int a = returnsOne();
    EXPECT_EQ(1, a);
}

TEST(basic_tests, test_neq) {
    EXPECT_NE(1, 0);
}