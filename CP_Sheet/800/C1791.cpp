#include<bits/stdc++.h>
using namespace std;

void shortest_len() {
    int n;
    cin >> n;
    string v;
    cin >> v;

    bool zero = true;
    
    if(v[0] == '1' && v[n-1] == '1')
        cout << n << "\n";

    else {
        int res = 0;
        for(int i = 0, j = n-1; i < n/2, j >= n/2; ++i, --j) {
            if(v[i] == v[j]) {
                zero = false;
                res = (j-i+1);
                break;
            }
        }
        if(zero)
            cout << 0 << "\n";
        else
            cout << res << "\n";
    }  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        shortest_len();
    }

    return 0;
}