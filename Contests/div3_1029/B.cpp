#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

void Solve() {
    int n;
    cin >> n;

    if(n == 3) {
        cout << 2 << ' ' << 3 << ' ' << 1;
        cout << '\n';
    }
    else {
        vector<int> v = {2,3,n};
        for(int i = 4; i < n; ++i) {
            v.push_back(i);
        }
        v.push_back(1);
        
        for(int i = 0; i < n; ++i) {
            cout << v[i] << ' ';
        }
        cout << '\n';
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