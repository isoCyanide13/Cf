#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

void Solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long res = LLONG_MAX;
    // initially x = a[i]-i = a[0]-0
    long long x = a[0]-0;

    for(int j = 1; j < n; ++j) {
        // val = a[i]+a[j]+j-i
        long long val = (a[j]+j) + x;
        res = min(res,val);
        // a[0]-0 will be upgraded to a[1]-1 and so on...
        x = min(x,a[j]-j);
    }
    cout << res << '\n';
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