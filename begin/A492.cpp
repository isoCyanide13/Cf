#include<bits/stdc++.h>
using namespace std;

int find_height(const int& n) {
    int cubes_required = 0;
    int cubes_remaining = n;
    int height = 0;
    for(int i = 1; i <= n; i += 1) {
        cubes_required += i;
        if(cubes_required <= cubes_remaining) {
            cubes_remaining -= cubes_required;
            height += 1;
        }
    }
    return height;
}

// resubmitting due to server maintanence!
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int height = find_height(n);
    cout << height;
    return 0;
}