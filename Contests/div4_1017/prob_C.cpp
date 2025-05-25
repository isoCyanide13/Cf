#include<bits/stdc++.h>
using namespace std;

void brr_brr_patapim() {
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    unordered_set<int> elements;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> grid[i][j];
            elements.insert(grid[i][j]);
        }
    }
    // permutation array
    vector<int> permutation(2*n);

    // finding missing num
    for(int num = 1; num <= 2*n; ++num) {
        if(elements.find(num) == elements.end()) {
            permutation[0] = num;
            break;
        }
    }
    // adding other elements present in the permutation
    for(int k = 2; k <= 2*n; ++k) {
        // cell where i + j = k
        for(int i = 1; i <= n; ++i) {
            int j = k-i;
            if(j >= 1 && j <= n) {
                permutation[k - 1] = grid[i - 1][j - 1];
                break;
            }
        }
    }
    
    for(int& num: permutation) {
        cout << num << " ";
    }
    cout << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        brr_brr_patapim();
    }

    return 0;
}