#include<bits/stdc++.h>
using namespace std;

int find_min_operations(vector<int> arr, int size) {
    for(int i = 0; i < size; i +=1) {
        for(int j = i+1; j < size; j += 1) {
            if(arr[i] > arr[j]) swap(arr[i], arr[j]);
        }
    }
    int min_operations = (arr[size - 1] - arr[0]);
    return min_operations;
}

// resubmitting due to server maintanence!
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> results;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i += 1) {
            cin >> arr[i];
        }
        results.push_back(find_min_operations(arr, n));
    }
    for(int r: results) {
        cout << r << endl;
    }
    return 0;
}