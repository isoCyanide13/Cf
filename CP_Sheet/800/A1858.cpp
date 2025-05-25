#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if(c%2 != 0) {
            // 1 c button remaining & next turn is Anna's
            if(a+1 <= b)
                cout << "Second" << "\n";
            else
                cout << "First" << "\n";
        }
        else {
            // all c buttons are pressed
            if(a <= b)
                cout << "Second" << "\n";
            else
                cout << "First" << "\n";
        }
    }

    return 0;
}