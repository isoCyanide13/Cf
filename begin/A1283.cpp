#include<bits/stdc++.h>
using namespace std;

int minutes_rem(const int hh, const int mm) {
    int total_min = 1440;
    int subtract_with = (hh*60) + mm;
    return (total_min - subtract_with);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> results;
    while(t--) {
        int hh, mm;
        cin >> hh >> mm;
        results.push_back(minutes_rem(hh, mm));
    }
    for(int r: results) {
        cout << r << endl;
    }

    return 0;
}