// utility.cpp
#include <bits/stdc++.h>
#include "utility.h"

void greet() {
    std::cout << "Hello from the utility functions!\n";
}

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

bool isEven(int n) {
    return n % 2 == 0;
}

void printArray(const std::vector<int> v) {
    int n = v.size();
    std::cout << "Array elements: ";
    for (int i = 0; i < n; ++i) {
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';
}
