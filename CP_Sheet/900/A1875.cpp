#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()

using namespace std;
typedef vector<int> vi;




int main() {

    isocyanide

    int t;
    cin >> t;

    while(t--) {
        long long a, b;
        int n;
        cin >> a >> b >> n;

        vi x(n);
        for(int i = 0; i < n; ++i) {
            cin >> x[i];
        }
        // sort(all(x));

        long long time = 0;
        long long current = b;
        int i = 0;

        while(i < n) {
            if(current == 0) break;

            if(current > 1) {
                int del = current - 1;
                time += del;
                current = 1;
            }
            current = min(current+x[i++],a);
            time += 1;
            current -= 1;
        }
        time += current;
        cout << time << '\n';
    }
           
    return 0;
}