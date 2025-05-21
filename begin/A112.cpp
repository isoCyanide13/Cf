#include<bits/stdc++.h>
using namespace std;

void cnvrt_string(string& str) {
    for (char& c: str) {
        c = tolower(c);
    }
}

int check(const string str1, const string str2) {
    int i=0;
    int val = 0;
    while(i < str1.size()) {
        if (str1[i] == str2[i]) val += 0;
        else {
            if(str1 [i] < str2 [i]) {
                val = -1;
                break;
            }
            else if(str1 [i] > str2 [i]) {
                val = 1; 
                break;
            }
        }
        i += 1;
    }
    return val;
}

int main() {
    string str[2];
    cin >> str[0] >> str[1];

    for(string& s: str) {
        cnvrt_string(s);
    }
    int result = check(str[0], str[1]);
    cout << result;
    return 0;
}