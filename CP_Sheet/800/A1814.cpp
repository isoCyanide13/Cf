#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        
        if((n-k)%2 == 0 || n%2 == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}