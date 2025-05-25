#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

void Solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;
    
    int maxConsecutive = 1;
    int equalConsecutive = 1;

    for(int i = 1; i < n; ++i) {
        if(s[i] == s[i-1]) {
            equalConsecutive += 1;
        }
        else {
            equalConsecutive = 1;
        }
        maxConsecutive = max(maxConsecutive,equalConsecutive);
    }

    int minimumCost = maxConsecutive + 1;
    cout << minimumCost << '\n';
}

int32_t main() {
    
    isocyanide
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        Solve();
    }

    return 0;
}