#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    set<int> s;
    for(int i = 0; i < n; ++i) {
        int ele;
        cin >> ele;
        s.insert(ele);
    }

    cout << s.size() << "\n";
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