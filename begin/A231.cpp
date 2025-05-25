#include<bits/stdc++.h> // team
using namespace std;

int main() {
    int p, v, t;
    int n; int res = 0;
    cin >> n;
    while(n--) {
        cin >> p >> v >> t;
        if(p+v+t >= 2) res += 1;
    }
    cout << res;
    return 0;
}