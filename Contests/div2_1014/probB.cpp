#include<bits/stdc++.h>
using namespace std;

string solve_password(const string& a, const string& b, int n) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == '1') cnt++;
        if(b[i] == '1') cnt++;
    }
    return(cnt <= n) ? "YES" : "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    vector<string> results;
    
    while(t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        results.push_back(solve_password(a, b, n));
    }

    for(const string& r : results) {
        cout << r << endl;
    }

    return 0;
}