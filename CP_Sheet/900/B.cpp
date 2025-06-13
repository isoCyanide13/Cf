#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

int LSB(long long& n) {
    int lsb = n & 01;
    return lsb;
}

void Solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] == 1) {
            a[i]++;
        }
    }
    for(int i = 1; i < n; ++i) {
        if(a[i] % a[i-1] == 0) {
            a[i] += 1;
        }
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << '\n';
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