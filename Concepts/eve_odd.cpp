#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int& ele: a) {
        cin >> ele;
    }

    int sign;
    int lsb;

    int pos_cnt = 0;
    int neg_cnt = pos_cnt;
    int eve_cnt = pos_cnt;
    int odd_cnt = pos_cnt;

    for(int& ele: a) {
        (ele == 0) ? sign = 0 : sign = ele / abs(ele);
        
        ele = abs(ele);
        lsb = ele & 1;
        
        if(sign < 0) neg_cnt++;
        else if(sign > 0) pos_cnt++;

        (lsb == 0) ? eve_cnt++ : odd_cnt++;
    }

    cout << "Even: " << eve_cnt << '\n';
    cout << "Odd: " << odd_cnt << '\n';
    cout << "Positive: " << pos_cnt << '\n';
    cout << "Negative: " << neg_cnt << '\n';

    return 0;
}