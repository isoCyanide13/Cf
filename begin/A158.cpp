#include<bits/stdc++.h> // next round
using namespace std;

int main() {
    int n, k;
    int selected = 0;
    scanf("%d %d", &n, &k);
    int scores[n];
    for(int i = 0; i < n; i++) scanf("%d", &scores[i]);
    for(int i = 0; i < n; i++) {
        if ((scores[i] >= scores[k-1]) && (scores[i] != 0))
            selected += 1;
    }
    cout << selected;
    return 0;
}