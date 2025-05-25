#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> arr(n);
    for(size_t i = 0; i < n; i += 1) {
        cin >> arr[i];
        arr[i] = abs(arr[i]);
    }
    cout << *min_element(arr.begin(), arr.end());
    
    return 0;
}
