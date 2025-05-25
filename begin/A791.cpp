#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    int yr_cnt = 0;
    scanf("%d %d", &a, &b);
    while(a <= b) {
        a *= 3;
        b *= 2;
        yr_cnt++;
    }
    cout << yr_cnt;
    return 0;
}