#include<bits/stdc++.h>
using namespace std;
using ll = long long;


ll med(const vector<ll>& v) {
    int m = v.size();

    vector<ll> temp = v;
    sort(temp.begin(), temp.end());

    int ele_indx = ceil((double) m / 2);
    
    return temp[ele_indx];
}


void solve() {
    ll n, k;
    cin >> n >> k;
    
    vector<ll> a(n), p1, p2, p3, temp;
    for(ll& ele: a) {
        cin >> ele;
    }
    
    temp = a;
    sort(temp.begin(), temp.end());

    if(temp[1] > k) {
        cout << "NO\n";
    }
    else {
        p1.push_back(a[0]);
        int i = 1;

        while(i < n-3 && med(p1) <= k) {
            p1.push_back(a[i]);
            i += 1;
        }

        p3.push_back(a[n-1]);
        int j = n-2;

        while(j > i+2 && med(p3) <= k) {
            p3.push_back(a[j]);
            j -= 1;
        }

        while(i <= j){
            p2.push_back(a[i]);
            i += 1;
        }

        ll val1 = med(p1);
        ll val2 = med(p2);
        ll val3 = med(p3);
        vector<ll> final_v = {val1, val2, val3};

        ll final_val = med(final_v);
        
        (final_val <= k) ? cout << "YES\n" : cout << "NO\n";
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}