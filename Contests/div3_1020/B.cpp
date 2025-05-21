#include<bits/stdc++.h>
using namespace std;

void st_chroma() {
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    if(x < n) {
        v[n-1] = x;

        bool flag = false;
        for(int i = 0; i < n-1; ++i) {
            if(i == x)
                flag = true;

            if(!flag)
                v[i] = i;
            else
                v[i] = i+1;
        }
    }
    else {
        for(int i = 0; i < n; ++i) {
            v[i] = i;
        }
    }

    for(int& ele: v) {
        cout << ele << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        st_chroma();
    }

    return 0;
}