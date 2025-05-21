#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool is_prime(const int& n) {
    if(n == 1)
        return false;

    int y = sqrt(n);
    for(int i = 2; i <= y; ++i) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    int i = 2;
    while(i <= n) {
        if(is_prime(i))
            cout << i++ << ' ';
        else
            i += 1;
    }
}