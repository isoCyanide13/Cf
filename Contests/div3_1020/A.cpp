#include<bits/stdc++.h>
using namespace std;

void compliment_bit(char& c) {
    if(c == '0')
        c = '1';
    else
        c = '0';
}

void dr_T() {
    int n;
    cin >> n;

    string s;
    cin >> s;
        
    vector<string> a;
    for(int i = 0; i < n; ++i) {
        compliment_bit(s[i]);
        a.push_back(s);
        compliment_bit(s[i]);
    }

    int cnt = 0;
    for(string& nums: a) {
        for(char& bits: nums) {
            if(bits == '1')
                cnt += 1;
            else
                continue;
        }
    }
    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        dr_T();
    }

    return 0;
}