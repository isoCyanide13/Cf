#include<bits/stdc++.h>
using namespace std;

bool is_substring(const string &current, const string &s) {
    int n = current.length();
    int m = s.length();
    
    if (m == 0) return true;
    if (n < m) return false;
    
    for (size_t i = 0; i <= n - m; i++) {
        bool found = true;
        for (size_t j = 0; j < m; j++) {
            if (current[i + j] != s[j]) {
                found = false;
                break;
            }
        }
        if(found)
            return true;
    }
    return false;
}

int min_operation(const string &x, const string &s) {
    string current = x;
    int operations = 0;
    
    while (current.size() <= 32) {
        if (is_substring(current, s)) {
            return operations;
        }
        current += current;
        operations++;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> results;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        
        results.push_back(min_operation(x, s));
    }
    
    for (int res : results) {
        cout << res << "\n";
    }
    return 0;
}