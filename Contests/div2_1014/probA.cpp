#include <bits/stdc++.h>
using namespace std;

int find_max_pleasure(const vector<int>& arr) {
    int max_beauty = *max_element(arr.begin(), arr.end());
    int min_beauty = *min_element(arr.begin(), arr.end());
    return max_beauty - min_beauty;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    vector<int> results;

    while(t--) {
        int n;
        cin >> n;
        vector<int> sheeps(n);
        for(size_t i = 0; i < n; i += 1) {
            cin >> sheeps[i];
        }
        results.push_back(find_max_pleasure(sheeps));
    }
    for(const int& r: results) {
        cout << r << endl;
    }
}