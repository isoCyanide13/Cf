#include<bits/stdc++.h>
using namespace std;

void good_array() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int& ele: v) {
        cin >> ele;
    }

    int cnt = 0;
    for(int i = 0; i < n-1; ++i) {
        if((v[i] % 2) == (v[i+1] % 2))
            cnt += 1;
    }
    cout << cnt << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        good_array();
    }

    return 0;
}