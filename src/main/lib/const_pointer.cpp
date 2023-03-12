//
// Created by xiaodoli on 3/11/2023.
//

#include "const_pointer.h"
#include <iostream>
#include <vector>

using namespace std;

void test_const_pointer() {
    vector<int> vec;
    for (int i = 0; i < 10; i++) {
        vec.push_back(i);
    }

    auto iter = vec.begin();

    cout << "changing 0th element to 100" << endl;
    *iter = 100;
    cout << "the 0th element is changed to 100" << endl;

    cout << "incrementing iterator" << endl;
    iter++;
    cout << "iterator incremented" << endl;

}

void test_const_iterator() {
    vector<int> vec;
    for (int i = 0; i < 10; i++) {
        vec.push_back(i);
    }

    try {
        vector<int>::const_iterator iter = vec.begin();

        cout << "incrementing iterator" << endl;
        ++iter;
        cout << "iterator incremented" << endl;

        cout << "changing 0th element to 100" << endl;
//        *iter = 100;
        cout << "the 1st element is changed to 100" << endl;
    } catch (out_of_range &e) {
        cout << e.what() << endl;
    } catch (exception &e) {
        cout << e.what() << endl;
    } catch (...) {
        cout << "unknown exception" << endl;
    }
}