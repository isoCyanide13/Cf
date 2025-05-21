#include<bits/stdc++.h>
using namespace std;

void arr_colouring() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(size_t i = 0; i < n; i += 1) {
        cin >> a[i];
    }
    int odd_cnt = 0;
    
    for(size_t i = 0; i < n; i += 1) {
        if(a[i] % 2 != 0) odd_cnt += 1;
    }

    if(odd_cnt % 2 != 0)
        cout << "NO" << "\n";
    else 
        cout << "YES" << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    while(t--) {
     arr_colouring();
    }
    
    return 0;
}