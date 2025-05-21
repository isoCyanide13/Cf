#include<bits/stdc++.h>
using namespace std;

void sort_string(string& s) {
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s.size() - 1; j++) {
            if (s[j] > s[j + 1]) swap(s[j], s[j + 1]);
        }
    }
}

bool find_fake_girl(string s) {
    // set<char> unique_chars;
    // for (char c : s) {
    //     unique_chars.insert(c);
    // }
    // int distinct_char = unique_chars.size();
    // return (distinct_char % 2 != 0);

    int unique_count = 1;
    sort_string(s);
    for(int i = 1; i < s.size(); i += 1) {
        if(s[i] != s[i-1]) unique_count++;
    }
    return (unique_count % 2 != 0);
}

int main() {
    string s;
    cin >> s;
    bool res = find_fake_girl(s);
    if(res) cout << "IGNORE HIM!";
    else  cout << "CHAT WITH HER!";
    return 0;
}