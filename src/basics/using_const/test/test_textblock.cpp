//
// Created by xiaodoli on 3/12/2023.
//

#include "../TextBlock.h"

#include "gtest/gtest.h"

using namespace std;

TEST(TextBlock, test_text_block) {
    TextBlock tb("Hello");
    EXPECT_EQ('H', tb[0]);
    EXPECT_EQ('e', tb[1]);
    EXPECT_EQ('l', tb[2]);
    EXPECT_EQ('l', tb[3]);
    EXPECT_EQ('o', tb[4]);

    auto c = tb[0];
    c = 'X';
    EXPECT_EQ('H', tb[0]);
    EXPECT_EQ('X', c);
    tb[0] = 'Y';
    EXPECT_EQ('Y', tb[0]);

    const auto c2 = tb[0];
    EXPECT_EQ('Y', c2);
}

TEST(TextBlock, test_text_block_const) {
    const TextBlock tb("Hello");
    EXPECT_EQ('H', tb[0]);
    EXPECT_EQ('e', tb[1]);
    EXPECT_EQ('l', tb[2]);
    EXPECT_EQ('l', tb[3]);
    EXPECT_EQ('o', tb[4]);

    auto c = tb[0];
    c = 'X';
    EXPECT_EQ('H', tb[0]);
    EXPECT_EQ('X', c);

    // cannot assign to variable 'tb' with const-qualified type 'const TextBlock'
    // tb[0] = 'Y';
    // EXPECT_EQ('Y', tb[0]);
}