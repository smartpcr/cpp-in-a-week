//
// Created by xiaodoli on 3/12/2023.
//


#include <vector>
#include <string>
#include <map>
#include <iostream>
//#include <boost/type_traits.h>
//#include <boost/type_index.hpp>
// TODO: use boost::typeindex::type_id_with_cvr<T>().pretty_name() to print type name
// TODO: fetchContent for boost library is slow, use FindPackage instead

using namespace std;

template<typename T>
void print_type(const T& param) {
    // cout << boost::typeindex::type_id_with_cvr<T>().pretty_name() << endl;
    cout << "type=" << typeid(T).name() << ", param=" << typeid(param).name() << ", value=" << param << endl;
}

template<typename T>
void f1(const T param) {
    cout << "f1: ";
    print_type(param);
}

template<typename T>
void f2(const T& param) {
    cout << "f1: ";
    print_type(param);
}

int main() {
    f1(1);
    f1(1.0);
    f1("hello");

    int x = 27;
    f1(x);
    f2(x);

    const int cx = x;
    f1(cx);
    f2(cx);

    const int& rx = x;
    f1(rx);
    f2(rx);

    const int* px = &x;
    f1(px);
    f2(px);
}