#include<bits/stdc++.h>
using namespace std;

void extremly_round() {
    int n;
    cin >> n;

    if (n < 10) {
        cout << n << "\n";
        return;
    }

    int base = 1;
    while((base * 10) <= n) {
        base *= 10;
    }

    int first_digit = n / base;

    int digits = to_string(base).size();
    int res = (9 * (digits-1)) + first_digit;

    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        extremly_round();
    }

    return 0;
}