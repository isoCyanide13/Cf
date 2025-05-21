#include <bits/stdc++.h>
using namespace std;

bool find_suspicion(const string s) {
    bool suspicion = false;
    vector<char> char_arr;
    for (int i = 0; i < s.size(); i += 1) {
        if (i < s.size() - 1 && s[i] == s[i + 1]) {
            continue;
        }
        char_arr.push_back(s[i]);
    }
    for (int i = 0; i < char_arr.size(); i += 1) {
        for (int j = i + 1; j < char_arr.size(); j += 1) {
            if (char_arr[i] == char_arr[j]) {
                suspicion = true;
                break;
            }
        }
    }
    return suspicion;
}

int main() {
    int t;
    cin >> t;
    vector<bool> res;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool sus = find_suspicion(s);
        res.push_back(sus);
    }
    for(bool r : res) {
        if(r == false) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}