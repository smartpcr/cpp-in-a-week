//
// Created by xiaodoli on 3/11/2023.
//

#include "../const_pointer.h"
#include "gtest/gtest.h"

using namespace std;

TEST(Const_Pointer, test_const_pointer) {
    EXPECT_NO_THROW(use_const_pointer());
}

TEST(Const_Pointer, test_const_iterator) {
    EXPECT_NO_THROW(use_const_iterator());
}