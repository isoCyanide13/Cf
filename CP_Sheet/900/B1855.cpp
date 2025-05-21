#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;
typedef unsigned long long ull;

void Solve() {
    ull n;
    cin >> n;

    ull l = 1;
    // ull x = sqrt(n);

    ull r = 1;
    for(ull i = 2; i <= n; ++i) {
        if(n % i != 0) break;
        else r++;
    }
    ull res = r-l+1;
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