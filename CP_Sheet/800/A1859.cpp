#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), b, c;
        bool allSame = true;

        for(size_t i=0; i<n; ++i) {
            cin >> a[i];
            if(a[i] == 1) b.push_back(a[i]);
        }
        for (size_t i = 1; i < n; ++i) {
            if (a[i-1] != a[i]) {
                allSame = false;
                break;
            }
        }
        // if all same
        if(allSame) cout << -1 << endl;

        // if not all same & 1 is the min ele
        else if(b.size() > 0) {
            for(size_t i=0; i<n; ++i) {
                if(a[i] == 1) continue;
                else c.push_back(a[i]);
            }

            cout << b.size() << " " << c.size() << endl;
            for(int& ib: b)
                cout << ib << " ";
            cout << endl;
            for(int& ic: c)
                cout << ic << " ";
            cout << endl;
        }

        // if not all same and 1 is not the min ele
        else {
            int min_ele = *min_element(a.begin(), a.end());
            
            for(size_t i=0; i<n; ++i) {
                if(a[i] == min_ele)
                    b.push_back(a[i]);
                else c.push_back(a[i]);
            }
            cout << b.size() << " " << c.size() << endl;
            for(int& ib: b)
                cout << ib << " ";
            cout << endl;
            for(int& ic: c)
                cout << ic << " ";
            cout << endl;   
        }
    }
    return 0;
}