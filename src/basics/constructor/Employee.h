//
// Created by xiaodoli on 3/12/2023.
//

#ifndef CPP_IN_A_WEEK_Employee_H
#define CPP_IN_A_WEEK_Employee_H

#include <string>

class Employee {
public:
    Employee(const char* name, const int age);
    Employee(const std::string& name, const int age);

    // copy constructor
    Employee(const Employee& e) : name(e.name), age(e.age) {}

    // assignment operator
    Employee& operator=(const Employee& e) {
        if (this != &e) {
            // this->name = e.name; // error: assignment of member ‘Employee::name’ in read-only object
            // this->age = e.age; // error: assignment of member ‘Employee::age’ in read-only object
        }
        return *this;
    }

    std::string getName() const;
    int getAge() const;

private:
    const std::string name;
    const int age;
};

#endif //CPP_IN_A_WEEK_Employee_H
