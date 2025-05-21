#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main() {
    isocyanide

    int n, k;
    cin >> n >> k;

    vector<int> v(n), r;
    for(int& ele : v) {
        cin >> ele;
    }

    // if n < k; so number of groups = 1
    if(n < k) {
        int min_ele = *min_element(v.begin(), v.end());
        r.push_back(min_ele);
    }
    else {
        int grp = n / k;
        int rem = n % k;
        int x = 0;

        // finding min ele of each groups of k elements
        while(grp--) {
            int min_ele = *min_element(v.begin()+x, v.begin()+x+k);
            r.push_back(min_ele);
            x += k;
        }

        // if v has remaining elements
        if(rem) {
            int min_ele = *min_element(v.begin()+x, v.end());
            r.push_back(min_ele);
        }
    }

    for(int& ele : r) {
        cout << ele << ' ';
    }

    return 0;
}

/*
inputs: 
8 3
4 -1 2 3 5 0 2 7

output:
-1 0 2 
*/