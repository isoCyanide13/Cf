#include <bits/stdc++.h>
using namespace std;

string can_be_sorted(const vector<int>& a) {
    if(a[0] == 1)
        return "YES";
    else
        return "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<string> results;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        results.push_back(can_be_sorted(arr));
    }

    for(const string& r: results) {
        cout << r << endl;
    }

    return 0;
}