#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    char inpt;
    cin >> inpt;

    int cycle = (inpt - 97 + 1) % 26;
    char next_char = char(97 + cycle);

    cout << next_char;
    
    return 0;
}