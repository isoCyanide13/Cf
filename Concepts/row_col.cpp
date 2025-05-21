#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main() {
    isocyanide
 
    long long id;
    cin >> id;

    long long row = id / 4;
    int mod = id % 4;

    int lsb = row % 2;

    int col;
    (lsb == 1) ? col = 3 - mod : col = mod;

    cout << row << ' ' << col;   

    return 0;
}