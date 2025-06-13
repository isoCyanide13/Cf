#include<bits/stdc++.h>

int32_t main() {

    int x = 42;
    const float& y = x;
    decltype(y) z = x;  // z is const int& (matches exactly)

    std::cout << "x type\t\t\t\t\t\t:\t" << typeid(decltype(x)).name() << '\n';
    std::cout << "y type\t\t\t\t\t\t:\t" << typeid(decltype(y)).name() << '\n';
    std::cout << "z type\t\t\t\t\t\t:\t" << typeid(decltype(z)).name() << '\n';

    auto valx = std::is_const<decltype(x)>::value;

    auto valy = std::is_const_v<decltype(y)>;
    auto valy_removed_ref = std::is_const_v<std::remove_reference_t<decltype(y)>>;

    auto valz = std::is_const_v<decltype(z)>;
    auto valz_removed_ref = std::is_const_v<std::remove_reference<decltype(z)>::type>;

    // td::remove_reference_t<decltype(y)>
    // is equivalent to
    // std::remove_reference<decltype(y)>::type

    std::cout << "Is x const ?\t\t\t\t:\t" << valx << '\n';

    std::cout << "Is y const ?\t\t\t\t:\t" << valy << '\n';
    std::cout << "Is y_removed_ref const ?\t:\t" << valy_removed_ref << '\n';
    
    std::cout << "Is z const ?\t\t\t\t:\t" << valz << '\n';
    std::cout << "Is z_removed_ref const ?\t:\t" << valz_removed_ref << '\n';

    return 0;
}