#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t t;
    cin >> t;
    while(t--) {
        string n;
        cin >> n;

        int b = 0, cnt = 0;
        for(auto& c: n) {
            if(c == '0')
                cnt += 1;
            else
                b = max(b, cnt+1);
        }
        cout << n.size() - b << "\n";
    }

    return 0;
}