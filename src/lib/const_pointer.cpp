//
// Created by xiaodoli on 3/11/2023.
//

#include "const_pointer.h"
#include <iostream>
#include <vector>

using namespace std;

void use_const_pointer() {
    vector<int> vec;
    for (int i = 0; i < 10; i++) {
        vec.push_back(i);
    }

    const auto iter = vec.begin();

    cout << "changing 0th element to 100" << endl;
    *iter = 100;
    cout << "the 0th element is changed to 100" << endl;

    cout << "incrementing iterator" << endl;
    // compiler error: increment of read-only pointer ‘iter’
    // iter++;
    cout << "iterator incremented" << endl;

}

void use_const_iterator() {
    vector<int> vec;
    for (int i = 0; i < 10; i++) {
        vec.push_back(i);
    }

    vector<int>::const_iterator iter = vec.begin();

    cout << "incrementing iterator" << endl;
    ++iter;
    cout << "iterator incremented" << endl;

    cout << "changing 0th element to 100" << endl;
    // compiler error: write to read-only location ‘* iter’
    // *iter = 100;
    cout << "the 1st element is changed to 100" << endl;
}