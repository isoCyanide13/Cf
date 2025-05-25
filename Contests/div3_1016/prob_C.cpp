#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if(num <= 1)
        return false;
    if(num == 2)
        return true;
    if(num % 2 == 0)
        return false;
    
    for(size_t i=3; i*i <= num; i += 2) {
        if(num%i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    int x, k;
    cin >> x >> k;
    string s = to_string(x);
    string repeated;
    for (int i = 0; i < k; i++) {
        repeated += s;
    }
    long long int num = stoll(repeated);

    // check prime
    if(isPrime(num))
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}