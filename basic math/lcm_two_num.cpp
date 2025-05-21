#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    a = abs(a);
    b = abs(b);
    while(b != 0) {
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int LCM(const int& a, const int& b) {
    if (a == 0 || b == 0) return 0;
    int lcm = abs(a * b) / GCD(a, b);
    return lcm;
}

int main() {

    int m, n;
    cin >> m >> n;
    cout << LCM(m, n);
    return 0;
}