#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

void Solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    for(int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    // A permutation is said to be sorted if the elements
    // present in it are present in the same index number as it
    int k = 0;
    for(int i = 0; i < n; ++i) {
        int val = p[i];
        int index = i+1;
        k = __gcd(abs(val-index),k);
    }
    
    cout << k << '\n';
}

int32_t main() {
    
    isocyanide
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        Solve();
    }

    return 0;
}