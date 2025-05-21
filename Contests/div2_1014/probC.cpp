#include <bits/stdc++.h>
using namespace std;

int find_max_beauty(const vector<int>& arr, int n) {
    long long sum = 0;
    int odd_cnt = 0;
    int max_val = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] % 2 != 0) odd_cnt++;
        if (arr[i] > max_val) max_val = arr[i];
    }
    if (odd_cnt == n || odd_cnt == 0) {
        return max_val;
    }
    else {
        long long ans = (sum-odd_cnt) + 1;
        return ans;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> results;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (size_t i = 0; i < n; i++) {
            cin >> a[i];
        }
        results.push_back(find_max_beauty(a, n));
    }

    for(const int& r: results) {
        cout << r << endl;
    }

    return 0;
}