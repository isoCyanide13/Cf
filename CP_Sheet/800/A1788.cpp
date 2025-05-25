#include<bits/stdc++.h>
using namespace std;

void one_n_two() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int& ele: v) {
        cin >> ele;
    }

    int total_2s = count(v.begin(), v.end(), 2);
    int current_2s = 0;
    int k = -1;

    for(int i = 0; i < n; ++i) {
        if(v[i] == 2)
            current_2s += 1;
        if(current_2s == total_2s - current_2s) {
            k = i+1;
            break;
        }
    }   
    cout << k << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        one_n_two();
    }

    return 0;
}