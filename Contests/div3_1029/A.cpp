#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

void Solve() {
    int n,x;
    cin >> n >> x;

    vector<int> a(n);

    int firstIndex, lastIndex;
    bool foundFirst = false;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] == 1) {
            lastIndex = i;
            if(foundFirst == false) {
                firstIndex = lastIndex;
                foundFirst = true;
            }
        }
    }

    if((lastIndex-firstIndex+1) > x) {
        cout << "NO";
    }
    else {
        cout << "YES";
    }
    cout << '\n';
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