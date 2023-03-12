//
// Created by xiaodoli on 3/11/2023.
//

#include "const_pointer.h"
#include <iostream>
#include <vector>

void test_const_pointer() {
    std::vector<int> vec;
    for (int i = 0; i < 10; i++) {
        vec.push_back(i);
    }

    try {
        const std::vector<int>::iterator iter = vec.begin();

        std::cout << "changing 0th element to 100" << std::endl;
        *iter = 100;
        std::cout << "the 0th element is changed to 100" << std::endl;

        std::cout << "incrementing iterator" << std::endl;
        iter++;
        std::cout << "iterator incremented" << std::endl;
    } catch (std::out_of_range &e) {
        std::cout << e.what() << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    } catch (...) {
        std::cout << "unknown exception" << std::endl;
    }
}

void test_const_iterator() {
    std::vector<int> vec;
    for (int i = 0; i < 10; i++) {
        vec.push_back(i);
    }

    try {
        const std::vector<int>::const_iterator iter = vec.begin();

        std::cout << "incrementing iterator" << std::endl;
        ++iter;
        std::cout << "iterator incremented" << std::endl;

        std::cout << "changing 0th element to 100" << std::endl;
        *iter = 100;
        std::cout << "the 0th element is changed to 100" << std::endl;
    } catch (std::out_of_range &e) {
        std::cout << e.what() << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    } catch (...) {
        std::cout << "unknown exception" << std::endl;
    }
}