#include<bits/stdc++.h>
using namespace std;

string doremys_paint(const vector<long long>& a) {
    vector<long long> check = a;
    int sz = a.size();
    int int_cnt = 1;

    if(sz == 2) return "YES";

    else {
        sort(check.begin(), check.end());
        vector<long long> elements = {check[0]};

        for(size_t i = 1; i < sz; i += 1) {
            if(check[i] == check[i-1]) continue;
            else elements.push_back(check[i]);
        }
        if(elements.size() > 2) return "NO";
        else {
            int f1 = count(check.begin(), check.end(), elements[0]);
            int f2 = count(check.begin(), check.end(), elements[1]);
            return (f1 == sz || abs(f1-f2) <= 1) ? "YES" : "NO";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    vector<string> results;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(size_t i = 0; i < n; i += 1) {
            cin >> a[i];
        }
        results.push_back(doremys_paint(a));
    }

    for(const string& r: results) {
        cout << r << endl;
    }

    return 0;
}