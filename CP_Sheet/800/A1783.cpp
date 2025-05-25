#include<bits/stdc++.h>
using namespace std;

void make_it_beautiful() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int& ele: v) {
        cin >> ele;
    }

    // v1 <= v2 <= ... <= vn
    if(v[0] == v[n-1]) {
        cout << "NO\n";
        return;
    }
    
    else {
        cout << "YES\n";
        reverse(v.begin()+1, v.end());
    }

    for(int& ele: v) {
        cout << ele << " ";
    }
    cout << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        make_it_beautiful();
    }

    return 0;
}