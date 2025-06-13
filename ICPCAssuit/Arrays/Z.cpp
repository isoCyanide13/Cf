#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

bool binary_search(const vector<int>& v, const int& x) {
    int n = v.size();

    int low = 0;
    int high = n-1;
    while(low <= high) {
        int mid = (low+high) / 2;

        if(v[mid] == x) {
            return true;
        }
        else if(v[mid] > x) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return false;
}


void Solve() {
    int n,q;
    cin >> n >> q;

    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(all(a));

    vector<bool> results;
    while(q--) {
        int x;
        cin >> x;
        results.push_back(binary_search(a,x));
    }

    int sz = results.size();
    for(int i = 0; i < sz; ++i) {
        cout <<( (results[i]) ? "found" : "not found") << '\n';
    }
}

int32_t main() {
    
    isocyanide

    Solve();

    return 0;
}