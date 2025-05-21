#include<bits/stdc++.h>
using namespace std;

void vadims_collection() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    map<char, int> count;
    for(char c: s) {
        count[c]++;
    }

    string result;
    for(int i = 0; i < 10; ++i) {
        int required = 9 - i;

        for(int j = required; j < 10; ++j) {
            char digit = j + '0';

            if(count[digit] > 0) {
                result += digit;
                count[digit]--;
                break;
            }
        }
    }

    cout << result << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        vadims_collection();
    }

    return 0;
}