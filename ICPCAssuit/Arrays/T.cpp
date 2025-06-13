#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;


void Set_Matrix(vector<vi>& v, int n) {
    for(int i = 0; i < n; ++i) {
        vector<int> temp;
        for(int j = 0; j < n; ++j) {
            int ele;
            cin >> ele;
            temp.push_back(ele);
        }
        v.push_back(temp);
    }
}
void Solve() {
    int n;
    cin >> n;

    vector<vi> a;
    Set_Matrix(a,n);

    int primDiag = 0, secDiag = 0;
    for(int i = 0; i < n; ++i) {
        int j = i, k = n-1-i;
        while(j < n && k >= 0) {
            primDiag += a[i][j];
            secDiag += a[i][k];
            break;
        }
    }
    int finalRes = abs(primDiag - secDiag);
    cout << finalRes;
}

int32_t main() {
    
    isocyanide

    Solve();

    return 0;
}