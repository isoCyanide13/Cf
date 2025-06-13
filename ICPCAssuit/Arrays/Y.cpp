#include<bits/stdc++.h>
#define isocyanide ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(x) (x).begin(), (x).end()

using namespace std;
typedef vector<int> vi;

void Solve() {
   long long n,q;
   cin >> n >> q;

   vector<long long> a(n);
   for(int i = 0; i < n; ++i) {
      cin >> a[i];
   }

   vector<long long> prefix(n+1,0);
   for(int i = 0; i < n; ++i) {
      prefix[i+1] = prefix[i] + a[i];
   }

   for(int i = 0; i < q; ++i) {
      long long l,r;
      cin >> l >> r;

      long long summation = prefix[r]-prefix[l-1];
      cout << summation << '\n';
   }
}

int32_t main() {
    
    isocyanide

    Solve();

    return 0;
}