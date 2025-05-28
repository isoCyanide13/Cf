#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

void Solve() {
    int n;
    cin >> n;

    vector<long long> a = {0,1};
    if(n < 2) {
        cout << a[n-1];
    }
    
    else {
        long long temp = 0;
        for(int i = 2; i < n; ++i) {
            temp = a[i-2] + a[i-1];
            a.push_back(temp);
        }
        cout << a[n-1];
    }
}

int32_t main() {
    
    isocyanide

    Solve();

    return 0;
}