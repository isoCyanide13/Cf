#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char cap;
    if((97 <= s[0]) && (s[0] <= 122)) {
        cap = (s[0] - 32);
        swap(s[0], cap);
        cout << s;
    }
    else cout << s;
    return 0;
}