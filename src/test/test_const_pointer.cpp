//
// Created by xiaodoli on 3/11/2023.
//

#include "../main/lib/const_pointer.h"
#include <gtest/gtest.h>

using namespace std;

TEST(Const_Pointer, test_const_pointer) {
    EXPECT_THROW(test_const_pointer(), runtime_error);
}

TEST(Const_Pointer, test_const_iterator) {
    EXPECT_THROW(test_const_iterator(), runtime_error);
}