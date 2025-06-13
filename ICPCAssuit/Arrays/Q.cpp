#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

void Solve() {
    int n; 
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int incSubArr = n;
    for(int i = 0; i < n; ++i) {
        int cnt = 0;
        for(int j = i+1; j < n; ++j) {
            if(a[j-1] < a[j]) {
                cnt += 1;
            }
            else break;
        }
        incSubArr += cnt;
    }
    cout << incSubArr << '\n';
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