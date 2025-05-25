#include<bits/stdc++.h>
using namespace std;

void max_blank() {
    int n;
    cin >> n;
    vector<int> v(n), zcnt;
    for(int& ele: v) {
        cin >> ele;
    }

    for(int i = 0; i < n; ++i) {
        int cnt = 0;
        if(v[i] == 0) {
            int j = i;
            while(v[j] != 1 && j < n) {
                cnt += 1;
                j += 1;
            }
            i = j;
        }
        zcnt.push_back(cnt);
    }
    if(zcnt.empty())
        cout << 0 << "\n";
    else {
        int max = *max_element(zcnt.begin(), zcnt.end());
        cout << max << "\n";
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        max_blank();
    }

    return 0;
}