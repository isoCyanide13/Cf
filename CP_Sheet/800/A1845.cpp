#include<bits/stdc++.h>
using namespace std;

void forbidden() {
    int n, k, x;
    cin >> n >> k >> x;

    if(x != 1) {
        cout << "YES" << "\n";
        int sum = 0;
        cout << n << "\n";
        while(sum != n) {
            cout << 1 << " ";
            sum += 1;
        }
        cout << "\n";
    }
    else {
        // if n is even
        if(n%2 == 0 && k >= 2) {
            cout << "YES" << "\n";
            int i = n/2;
            cout << i << "\n";

            while(i--)
                cout << 2 << " ";
            cout << "\n";
        }
        // if n is odd
        else if(n%2 != 0 && k >= 3) {
            cout << "YES" << "\n";
            int i = (n-3)/2;
            cout << i+1 << "\n";

            while(i--)
                cout << 2 << " ";
            cout << 3 << "\n";
        }
        // other conditions
        else
            cout << "NO" << "\n";
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    while(t--) {
        forbidden();
    }
    return 0;
} 