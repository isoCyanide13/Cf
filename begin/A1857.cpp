#include<bits/stdc++.h>
using namespace std;

string array_colouring(const vector<int> arr, int n) {
    int cnt = 0;
    for(size_t i = 0; i < n; i += 1) {
        if(arr[i] % 2 != 0) cnt += 1;
    }

    if(cnt % 2 == 0) return "YES";
    else return "NO";
}

//fixed a minor issue of extra spaces!
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    vector<string> results;
    while(t--) {
        int n;
        cin >> n;
        vector<int> numbers(n);
        for(size_t i = 0; i < n; i += 1) {
            cin >> numbers[i];
        }
        string res = array_colouring(numbers, n);
        results.push_back(res);
    }

    for(string s: results) {
        cout << s << endl;
    }

    return 0;
}