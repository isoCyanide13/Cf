// main.cpp
#include <bits/stdc++.h>
#include "utility.h"
#include "naruto.h"

int main() {
    greet();
    rasengan();

    int x = 4, y = 5;
    std::cout << "Add: " << add(x, y) << '\n';
    std::cout << "Multiply: " << multiply(x, y) << '\n';

    std::cout << x << " is even? " << (isEven(x) ? "Yes" : "No") << '\n';

    return 0;
}