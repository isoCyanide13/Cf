#include<bits/stdc++.h>
using namespace std;

string minimize_str(const string& s, int sz) {
    string result;
    if(sz > 10) {
        stringstream ss;
        ss << s[0] << (sz-2) << s[sz-1];
        result = ss.str();
    }
    else result = s;
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<string> results;
    while(n--) {
        string str;
        cin >> str;
        int str_size = str.size();

        results.push_back(minimize_str(str, str_size));
    }
    
    for(const string& r: results) {
        cout << r << endl;
    }
    return 0;
}
