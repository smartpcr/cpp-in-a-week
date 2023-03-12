//
// Created by xiaodoli on 3/12/2023.
//

#include "..\Employee.h"
#include "gtest/gtest.h"

using namespace std;

TEST(Employee, test_employee) {
    Employee e1("xiaodoli", 1);
    EXPECT_EQ("xiaodoli", e1.getName());
    EXPECT_EQ(1, e1.getAge());

    Employee e2(std::string{"xiaodoli"}, 2);
    EXPECT_EQ("xiaodoli", e2.getName());
    EXPECT_EQ(2, e2.getAge());

    Employee e3("xiaodoli", 3);
    EXPECT_EQ("xiaodoli", e3.getName());
    EXPECT_EQ(3, e3.getAge());
}

TEST(Employee, test_copy_constructor) {
    Employee e1("xiaodoli", 1);
    EXPECT_EQ("xiaodoli", e1.getName());
    EXPECT_EQ(1, e1.getAge());

    Employee e2(e1);
    EXPECT_EQ("xiaodoli", e2.getName());
    EXPECT_EQ(1, e2.getAge());

    Employee e3 = e1;
    EXPECT_EQ("xiaodoli", e3.getName());
    EXPECT_EQ(1, e3.getAge());
}

TEST(Employee, test_assignment_operator) {
    Employee e1("xiaodoli", 1);
    EXPECT_EQ("xiaodoli", e1.getName());
    EXPECT_EQ(1, e1.getAge());

    Employee e2("xiaodoli", 2);
    EXPECT_EQ("xiaodoli", e2.getName());
    EXPECT_EQ(2, e2.getAge());

    e2 = e1;
    EXPECT_EQ("xiaodoli", e2.getName());
    EXPECT_EQ(1, e2.getAge());
}