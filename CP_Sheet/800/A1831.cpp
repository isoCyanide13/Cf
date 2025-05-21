#include<bits/stdc++.h>
using namespace std;

void twin_permutation() {
    int n;
    cin >> n;
    vector<int> a(n), b;
    int sum = 1+n;
    for(int& ele: a) {
        cin >> ele;
    }

    for(size_t i=0; i<n; ++i) {
        b.push_back(sum-a[i]);
    }

    for(int& ele: b) {
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
        twin_permutation();
    }

    return 0;
}


/* if(i < n-1 && a[i] < a[i+1]) {
            if(temp.empty()) {
                b.push_back(a[i]);
                i += 1;
            } else {
                while(!temp.empty()) {
                    b.push_back(temp.back());
                    temp.pop_back();
                }
                i += 1;
            }

        } else {
            temp.push_back(a[i]);
            i += 1;
        }*/