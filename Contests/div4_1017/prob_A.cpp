#include<bits/stdc++.h>
using namespace std;

void tripi_tropi() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    stringstream ss;
    ss << s1[0] << s2[0] << s3[0];
    string res = ss.str();

    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    size_t t;
    cin >> t;
    while(t--) {
        tripi_tropi();
    }

    return 0;
}