#include<bits/stdc++.h>
using namespace std;

void unit_arr() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(size_t i=0; i<n; ++i) {
        cin >> a[i];
    }

    int cnt_p1 = count(a.begin(), a.end(), 1);
    int cnt_m1 = count(a.begin(), a.end(), -1);

    // if number of 1 && -1 are same || all num are 1
    if(cnt_p1 == n)
        cout << 0 << "\n";

    // if num of 1 > num of -1
    else if(cnt_p1 > cnt_m1) {

        // if cnt of -1 even then, ∏(ai) = 1
        if(cnt_m1%2 == 0)
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }
    // if num of -1 > num of 1
    else {
        int min_step = 0;
        while(cnt_m1 > cnt_p1) {
            cnt_m1 -= 1;
            cnt_p1 += 1;
            min_step += 1;
            if(cnt_m1 == cnt_p1) {
                break;
            }
        }
        if(cnt_m1%2 == 0)
            cout << min_step << "\n";
        else
            cout << min_step + 1 << "\n";
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    while(t--) {
        unit_arr();
    }

    return 0;
}
