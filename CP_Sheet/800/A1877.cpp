#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    vector<int> results;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n-1);
        for(size_t i = 0; i < n-1; i += 1) {
            cin >> arr[i];
        }
        int sum = 0;
        for(const int& i: arr) sum += i;
        results.push_back(-sum);
    }

    for(const int& r: results) {
        cout << r << endl;
    }

    return 0;
}