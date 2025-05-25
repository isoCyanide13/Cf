#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return abs(a * b) / gcd(a, b);
}

int lcm_n_numbers(const vector<int>& nums, int n) {
    if (nums.empty()) return 0;
    int current_lcm = nums[0];
    for (size_t i = 1; i < n; ++i) {
        current_lcm = lcm(current_lcm, nums[i]);
    }
    return current_lcm;
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
    cout << lcm_n_numbers(numbers, n);
    return 0;
}
