#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;


void Solve() {
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
    }

    int lsb = n & 1;
    int ops = 0;
    // if n is even then xor all the elements
    if (lsb == 0) {
        ops = 2;
        cout << ops << '\n';
        cout << 1 << ' ' << n << '\n';
        cout << 1 << ' ' << n << '\n';
    }
    // if n is odd then 1st xor till n-1 terms and then xor n-1 and nth term
    else {
        ops = 4;
        cout << ops << '\n';
        cout << 1 << ' ' << n - 1 << '\n';
        cout << 1 << ' ' << n - 1 << '\n';
        cout << n - 1 << ' ' << n << '\n';
        cout << n - 1 << ' ' << n << '\n';
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