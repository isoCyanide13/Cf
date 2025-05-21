#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    int k = 2;
    int div = pow(10, k);

    int mod_a = a % div;
    int mod_b = b % div;
    int mod_c = c % div;
    int mod_d = d % div;

    int product = (mod_a * mod_b) % 100;
    product = (product * mod_c) % 100;
    product = (product * mod_d) % 100;

    cout << ((product < 10) ? "0" : "" ) << product;

    return 0;
}