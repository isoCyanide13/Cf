#include<bits/stdc++.h>
using namespace std;
#define ll long long

void palindrome() {
    int x;
    cin >> x;

    int base = 1;
    while(base * 10 <= x) {
        base *= 10;
    }

    int y = 0;
    int temp = x;
    while(temp != 0) {
        int last_num = temp % 10;
        y += last_num * base;
        temp /= 10;
        base /= 10;
    }

    cout << y << '\n';
    cout << ((x == y) ? "YES" : "NO");
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        palindrome();
    }
}