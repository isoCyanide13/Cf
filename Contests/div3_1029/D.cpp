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

    long long d = a[1]-a[0];
    for(int i = 2; i < n; ++i) {
        if(a[i]-a[i-1] != d) {
            cout << "NO" << '\n';
            return;
        }
    }

    if(d >= 0) {
        long long x = a[0]-d;
        long long y = n+1;
        if(x < 0 || x%y != 0) {
            cout << "NO" << '\n';
            return;
        }
    }
    else if(d < 0) {
        long long x = a[0]+d;
        long long y = n+1;
        if(x < 0 || x%y != 0) {
            cout << "NO" << '\n';
            return;
        }
    }
    else {
        cout << "YES" << '\n';
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