#include<bits/stdc++.h>
using namespace std;

bool is_sorted(const vector<int>& a, int n) {
    for(size_t i=1; i<n; ++i) {
        if(a[i] < a[i-1])
            return false;
    }
    return true;
}

void desorting() {
    int n;
    cin >> n;
    vector<int> a(n), d;
    for(size_t i=0; i<n; ++i){
        cin >> a[i];
    }
    if(!is_sorted(a,n))
        cout << 0 << "\n";
    else {
        for(size_t i=1; i<n; ++i){
            d.push_back(a[i] - a[i-1]);
        }
        int min = *min_element(d.begin(), d.end());
        if(min % 2 != 0)
            cout << (min + 2 - 1)/2 << "\n";
        else
            cout << (min + 2)/2 << "\n";
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    while(t--) {
        desorting();
    }
    return 0;
}