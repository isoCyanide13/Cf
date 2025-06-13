#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

void Solve() {

    for(int x = 0; x < 10; ++x) {
        std::cout << "OUTER LOOP: " << '\n';

        for(int y = 0; y < 10; ++y) {
            std::cout << "INNER LOOP: " << '\n';
            std::cout << "y is: " << y << '\n';
            break; // breaks from the inner loop !
        }
        continue;
        // will not excute the after code;
        std::cout << "x is: " << x << '\n';

    }
}

int32_t main() {
    
    isocyanide
    
    Solve();

    return 0;
}