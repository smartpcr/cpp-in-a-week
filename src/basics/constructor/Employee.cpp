//
// Created by xiaodoli on 3/12/2023.
//

#include "Employee.h"

Employee::Employee(const char *name, const int age) : name(name), age(age) {}

Employee::Employee(const std::string &name, const int age) : name(name), age(age) {}

std::string Employee::getName() const {
    return name;
}

int Employee::getAge() const {
    return age;
}