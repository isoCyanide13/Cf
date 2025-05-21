#include<bits/stdc++.h>
using namespace std;
 
int find_min_step(const vector<char>& arr, int n) {
    int min_step = 0;
    for(size_t i = 0; i < n; i += 1) {
        if(arr[i] == '#') continue;
        else if((i < n-2) && arr[i] == '.' && arr[i+1] == '.' && arr[i+2] == '.') {
            min_step = 2;
            break;
        }
        else {
            min_step += 1;
        }
    }
    return min_step;
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
        vector<char> s;
        for(size_t i = 0; i < n; i += 1) {
            char ch;
            cin >> ch;
            s.push_back(ch);
        }
        results.push_back(find_min_step(s, n));
    }

    for(const int& r: results) {
        cout << r << endl;
    }

    return 0;
}