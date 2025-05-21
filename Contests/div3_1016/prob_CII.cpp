#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if(num <= 1)
        return false;
    if(num == 2)
        return true;
    if(num % 2 == 0)
        return false;
    
    for(long long i = 3; i*i <= num; i += 2) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}
// fixed time complexity error
void solve() {
    long long x;
    int k;
    cin >> x >> k;
    
    if(k == 1) {
        cout << (isPrime(x) ? "YES" : "NO") << "\n";
    }
    else {
        // For k>=2.
        if(x != 1)
            cout << "NO" << "\n";
        else {
            long long repeat = 0;
            for(int i = 0; i < k; ++i){
                repeat = (repeat * 10) + 1;
            }
            cout << (isPrime(repeat) ? "YES" : "NO") << "\n";
        }
    }
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