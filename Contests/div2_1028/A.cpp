#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

void Solve() {
    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    if(b <= a && b <= c) {
        cout << "Gellyfish\n";
    }
    else if(a < d) {
        cout << "Flower\n";
    }
    else if(d <= c) {
        cout << "Gellyfish\n";
    }
    else {
        cout << "Flower\n";
    }
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