#include<bits/stdc++.h>
using namespace std;

int gcd(int m, int n) {
    if (n == 0) return m;
    return gcd(n, m % n);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    int res = gcd(abs(m), abs(n));
    cout << res << endl;
    return 0;
}