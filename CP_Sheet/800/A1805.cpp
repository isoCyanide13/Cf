#include<bits/stdc++.h>
using namespace std;

void need_zero() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int& ele: a) {
        cin >> ele;
    }

    int res = 0;
    if(n%2 != 0) {
        for(int& ele : a) {
            res ^= ele;
        }
    }
    else {
        for(int& ele : a) {
            res ^= ele;
        }
        if(res == 0) res = 0;
        else res = -1;
    }
    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        need_zero();
    }

    return 0;
}