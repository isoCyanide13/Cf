#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        int a, b, c ,d;
        cin >> a >> b >> c >> d;

        if(b == d) {
            if(c > a)
                cout << -1 << "\n";
            else
                cout << abs(c-a) << "\n";
        }

        else if(d < b)
            cout << -1 << "\n";

        else {
            int y_calc = abs(b-d);
            int x_calc = a + y_calc;
            if(x_calc < c)
                cout << -1 << "\n";
            else {
                x_calc = x_calc - c;
                int min = x_calc + y_calc;
                cout << min << "\n";
            }
        }
    }

    return 0;
}