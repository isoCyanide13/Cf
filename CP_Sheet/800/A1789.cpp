#include<bits/stdc++.h>
using namespace std;

int gcd_2(int m, int n) {
    m = abs(m);
    n = abs(n);

    while(n != 0) {
        int rem = m%n;
        m = n;
        n = rem;
    }
    return m;
}

void mochas_array() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int& ele: v) {
        cin >> ele;
    }
    
    bool good = false;
    for(int i = 0; i < n; ++i) {
        for(int j = i+1; j < n; ++j) {
            if(gcd_2(v[i], v[j]) <= 2) {
                good = true;
                break;
            }
        }
    }
    if(!good)
        cout << "NO" << '\n';
    else
        cout << "YES" << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        mochas_array();
    }

    return 0;
}