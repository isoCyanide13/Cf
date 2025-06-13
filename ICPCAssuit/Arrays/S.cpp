#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

void Solve() {
    int n, m, x;
    cin >> n >> m;

    vector<vi> v;
    for(int i = 0; i < n; ++i) {
        vector<int> temp;
        for(int j = 0; j < m; ++j) {
            int ele;
            cin >> ele;
            temp.push_back(ele);
        }
        v.push_back(temp);
    }
    cin >> x;

    bool found = false;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(v[i][j] == x) {
                found = true;
                break;
            }
        }
        if(found) break;
    }
    cout << ((found) ? "will not take number" : "will take number");
}

int32_t main() {
    
    isocyanide

    Solve();

    return 0;
}