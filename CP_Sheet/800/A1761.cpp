#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if((a+b+2 <= n) || (a == n && b == n)) {
            cout << "YES\n";
        } 
        else {
            cout << "NO\n";
        }
    }
    
    return 0;
}