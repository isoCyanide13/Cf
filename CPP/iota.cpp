#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

void Solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    std::iota(all(a), 0); // sequentially increasing values

    for(const int& i : a) {
        cout << i << ' ';
    }
}

int32_t main() {
    
    isocyanide
    
    Solve();

    return 0;
}