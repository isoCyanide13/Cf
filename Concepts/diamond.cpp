#include<bits/stdc++.h>
using namespace std;

void printShape(const int& n, const int& i) {
    // num of *'s per iteration
    int x = (2 * i) + 1;

    // num of ' 's per iteration
    int y = (n - 1) - i;

    // shape printing
    while (y != 0) {
        cout << ' ';
        y -= 1;
    }

    while (x != 0) {
        cout << '*';
        x -= 1;
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    // triangle 1
    for(int i = 0; i < n; ++i) {
        printShape(n,i);
    }

    // triangle 2
    for(int i = n-1; i >= 0; --i) {
        printShape(n,i);
    }

    return 0;
}