#include<bits/stdc++.h>
using namespace std;

string spell_check(const string& name, const string& str) {
    string sorted_name = name;
    string sorted_str = str;
    sort(sorted_name.begin(), sorted_name.end());
    sort(sorted_str.begin(), sorted_str.end());
    return(sorted_name == sorted_str) ? "YES" : "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string name = "Timur";
    size_t t;
    cin >> t;
    vector<string> results;
    while(t--) {
        int n;
        cin >> n;
        string inpt_name;
        cin >> inpt_name;
        if(n != name.size()) results.push_back("NO");
        else results.push_back(spell_check(name, inpt_name));
    }
    for(const string& r: results) {
        cout << r << endl;
    }

    return 0;
}