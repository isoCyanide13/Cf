#include<bits/stdc++.h>
using namespace std;

string find_square_string(const string& s, size_t sz) {
    if(sz % 2 != 0) return "NO";
    else {
        const int half_str = sz/2;
        vector<char> l_str, r_str;
        for(size_t i = 0, j = half_str; i < half_str, j < sz; i += 1, j += 1) {
            l_str.push_back(s[i]);
            r_str.push_back(s[j]);
        }
        for(size_t i = 0; i < half_str; i += 1) {
            if(l_str[i] == r_str[i]) continue;
            else return "NO";
        }
        return "YES";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    vector<string> results;
    while(t--) {
        string str;
        cin >> str;
        size_t str_size = str.size();
        results.push_back(find_square_string(str, str_size));
    }
    for(string s: results) {
        cout << s << endl;
    }
    return 0;
}