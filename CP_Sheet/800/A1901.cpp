#include<bits/stdc++.h>
using namespace std;

int find_min_vol(vector<int> arr, int n, int x) {
    int temp = 2 * (x - arr[n-1]);
    int dist = arr[0];
    for(size_t i = 0; i < n; i += 1) {
        if((i > 0) && dist < (arr[i] - arr[i-1])) {
            dist = arr[i] - arr[i-1];
        }
    }
    return (temp > dist) ? temp : dist;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    vector<int> results;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> gas_stations(n);
        for(size_t i = 0; i < n; i += 1) {
            cin >> gas_stations[i];
        }
        results.push_back(find_min_vol(gas_stations, n, x));
    }

    for(const int& r: results) {
        cout << r << endl;
    }

    return 0;
}
