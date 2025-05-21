#include<bits/stdc++.h>
using namespace std;
#define ll long long

void sashas_appartment() {
    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for(ll& ele: a) {
        cin >> ele;
    }

    sort(a.begin(), a.end());

    int rem_bars = n - k;

    int L_pos = (rem_bars - 1) / 2;
    int R_pos = L_pos + k;

    ll min_median = a[L_pos];
    ll max_median = a[R_pos];

    if(rem_bars % 2 == 0) {
        if(R_pos + 1 < n)
            max_median = a[R_pos + 1]; 
        else
            max_median = a[R_pos];
    }
    
    int answer = max_median - min_median + 1;
    cout << answer << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        sashas_appartment();
    }

    return 0;
}