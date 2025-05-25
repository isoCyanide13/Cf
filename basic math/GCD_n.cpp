#include<bits/stdc++.h>
using namespace std;


int hcf_two_num(int m, int n) {
    m = abs(m);
    n = abs(n);

    while(n != 0) {
        int rem = m%n;
        m = n;
        n = rem;
    }
    return m;
}

int hcf_n_numbers(const vector<int>& nums, const int& n) {
    if(nums.empty()) return 0;

    int current_gcd = nums[0];
    for(size_t i = 1; i < n; i+= 1) {
        current_gcd = hcf_two_num(current_gcd, nums[i]);
        if(current_gcd == 1) break;
    }
    return current_gcd;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i = 0; i < n; i += 1) {
        cin >> numbers[i];
    }
    cout << hcf_n_numbers(numbers, n);
    return 0;
}