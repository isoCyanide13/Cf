#include<bits/stdc++.h>
using namespace std;

void sort_sum(string& s) {
    for (int i = 0; i < s.size(); i += 2) {
        for (int j = i+2; j < s.size(); j += 2) {
            if (s[i] > s[j]) {
                swap(s[i], s[j]);
            }
        }
    }
}

int main() {
    string s;
    cin >> s;
    if(s.size() == 1) cout << s;
    else {
        sort_sum(s);
        cout << s;
    }
    return 0;
}