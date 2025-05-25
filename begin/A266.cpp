#include<bits/stdc++.h>
using namespace std;

int cn_min_stone(const vector<char> stones, int n) {
    int stone_cnt = 0;
    int i = 0;
    while(i < n) {
        if((i < n-1) && (stones[i] == stones[i+1])) {
            stone_cnt += 1;
        }
        i += 1;
    }
    return stone_cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<char> stones(n);
    for(int i = 0; i < n; i += 1) {
        cin >> stones[i];
    }
    cout << cn_min_stone(stones, n);
    
    return 0;
}