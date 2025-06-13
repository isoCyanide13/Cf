#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

void Solution() {
    string txt, revtxt;
    cin >> txt;

    revtxt = txt;
    reverse(all(revtxt));

    cout << (revtxt == txt ? "YES" : "NO");
}

int32_t main() {
    
    isocyanide
    
    Solution();

    return 0;
}