#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

void Solve() {

    long long n, k;
    cin >> n >> k;

    vi a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if(n == 1) {
        cout << 0 << '\n';
        return;
    }

    sort(all(a));
    long long cnt = 0;
    long long maxCnt = 0;

    for (int i = 1; i < n; ++i) {
        int diff = a[i] - a[i - 1];

        (diff <= k) ? cnt++ : cnt = 0;
        maxCnt = max(maxCnt,cnt);
    }
    long long removed = n - (maxCnt + 1);
    cout << removed << '\n';
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