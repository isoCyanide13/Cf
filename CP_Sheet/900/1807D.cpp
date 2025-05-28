/* Need some sleep, I'll definately go through this problem again after leaning concept with clarity again !*/
#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;
typedef vector<long long> vll;



void Solve() {
    int n, q;
    cin >> n >> q;

    vll a(n+1);
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    vll prefixSum(n+1);
    for(int i = 1; i <= n; ++i) {
        prefixSum[i] = prefixSum[i-1] + a[i];
    }

    while(q--){
        long long l,r,k;
        cin >> l >> r >> k;

        long long x = (r-l+1) * k;
        long long sum = prefixSum[l-1] + prefixSum[n] - prefixSum[r] + x;

        cout << ((sum%2 != 0) ? "YES" : "NO") << '\n';
    }
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