#include<bits/stdc++.h>
using namespace std;

int find_min_steps(size_t x) {
    size_t quotient = 0;
    size_t remainder = 0;

    quotient = (x / 5);
    remainder = (x % 5);

    if(remainder == 0) return quotient;
    else return quotient + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t x;
    cin >> x;
    int min_step = find_min_steps(x);
    cout << min_step << endl;
    return 0;
}