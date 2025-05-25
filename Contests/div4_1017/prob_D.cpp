#include<bits/stdc++.h>
using namespace std;

void tung_tung_sahur() {
    string p, s;
    cin >> p >> s;

    int i = 0, j = 0;
    int n = p.size(), m = s.size();

    if(m < n || m > 2*n) {
        cout << "NO" << "\n";
        return;
    }

    while(i < n && j < m) {
        if(p[i] != s[j]) {
            cout << "NO" << "\n";
            return;
        }
        // checking current is doubled or not
        if (j + 1 < m && s[j] == s[j+1])
            j += 2;
        else
            j += 1;
        i++;
    }

    if (i == n && j == m)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        tung_tung_sahur();
    }

    return 0;
}