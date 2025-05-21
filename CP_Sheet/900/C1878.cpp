#include <bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

void Vasilije() {
    long long n, k, x;
    cin >> n >> k >> x;

    // if number of choosing nums > x
    if(k >= x && x != 1) {
        cout << "NO" << '\n';
        return;
    }
    
    long long min_sum = (k * (k+1)) / 2;
    long long all_sum = (n * (n+1)) / 2;
    long long max_sum = all_sum - (((n-k)* (n-k+1)) / 2);

    // if sum < x
    cout << ((min_sum <= x && x <= max_sum) ? "YES" : "NO") << '\n';
}

int main() {
    isocyanide

    int t;
    cin >> t;
    while(t--) {
        Vasilije();
    }

    return 0;
}