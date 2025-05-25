#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    vector<string> results;

    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(size_t i = 0; i < n; i += 1) {
            cin >> arr[i];
        }
        auto found = find(arr.begin(), arr.end(), k);
        if(found != arr.end()) results.push_back("YES");
        else results.push_back("NO");
    }

    for(const string& r: results) {
        cout << r << endl;
    }

    return 0;
}
