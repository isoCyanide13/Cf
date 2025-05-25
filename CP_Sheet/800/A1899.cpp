#include<bits/stdc++.h>
using namespace std;

string find_winner(const int& n) {
    int temp = n;
    int sum = 0;
    while(temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    cout << sum;
    return (sum % 3 == 0) ? "Second" : "First";
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
        results.push_back(find_winner(n));
    }

    for(const string& r: results) {
        cout << r << endl;
    }
}
