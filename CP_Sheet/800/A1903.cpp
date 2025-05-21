#include<bits/stdc++.h>
using namespace std;

string find_solution(vector<int> a, int n, int k) {
    string result;
    if(k == 1) {
        for(size_t i = 0; i < n; i += 1) {
            if((i < n-1) && (a[i] > a[i+1])) {
                result = "NO";
                break;
            }
            else result = "YES";
        }
    }
    else result = "YES";
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    vector<string> results;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> num_on_box(n);
        for(size_t i = 0; i < n; i += 1) {
            cin >> num_on_box[i];
        }
        results.push_back(find_solution(num_on_box, n, k));
    }
    for(const string& r: results) {
        cout << r << endl;
    }

    return 0;
}