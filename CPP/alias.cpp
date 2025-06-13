#include<bits/stdc++.h>

int32_t main() {
    int x = 42;
    int& xref = x;

    std::cout << "x is\t\t\t:\t" << x << '\n';
    std::cout << "x address is\t:\t" << &x << '\n';
    std::cout << "x type is\t\t:\t" << typeid(x).name() << '\n';
    
    std::cout << "xref is\t\t\t:\t" << &x << '\n';
    std::cout << "xref address is\t:\t" << &xref << '\n';
    std::cout << "xref type is\t:\t" << typeid(xref).name() << '\n';
    
    
    int* y = nullptr;
    int*& yref = y;
    // int& yref = *y; // illegal

    std::cout << "y address is\t:\t" << &y << '\n';
    std::cout << "yref address is\t:\t" << &yref << '\n';

    return 0;
}