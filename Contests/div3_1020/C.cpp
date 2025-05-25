#include<bits/stdc++.h>
using namespace std;

void cherry_bomb() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n), b_indx;
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int cnt = 0;

    for(int i = 0; i < n; ++i) {
        cin >> b[i];

        if(b[i] != -1) {
            b_indx.push_back(i);
        }

        if(b[i] == -1)
            cnt += 1;
    }

    int result = 1;
    int a_max = *max_element(a.begin(), a.end());
    int a_min = *min_element(a.begin(), a.end());

    if(cnt == n) {
        result = (a_min + k) - a_max + 1;
    }
    else {
        int sum = a[b_indx[0]] + b[b_indx[0]];

        if(sum < a_max || sum - a_min > k) {
            result = 0;
        }

        for(int& i: b_indx) {
            if(a[i] + b[i] != sum) {
                result = 0;
                break;
            }
        }
    }
    cout << result << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        cherry_bomb();
    }

    return 0;
}