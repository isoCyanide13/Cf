#include<bits/stdc++.h>
using namespace std;

void find_seq() {
    int n;
    cin >> n;
    vector<long long> b(n), a;

    for(int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    a.push_back(b[0]);

    for(size_t i = 1; i < n; ++i) {
        a.push_back(b[i]);

        if(b[i] < b[i-1]) {
            a.push_back(b[i]);
        }
    }
    cout << a.size() << '\n';

    for(auto num : a) {
        cout << num << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    while(t--) {
        find_seq();
    }
    return 0;
}
