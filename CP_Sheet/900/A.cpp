#include<bits/stdc++.h>
using namespace std;

// quadrants
int dx[4] = {1, -1, -1, 1}, dy[4] = {1, 1, -1, -1};

void forked() {
  long long a, b;
  cin >> a >> b;
  
  long long xk, yk;
  cin >> xk >> yk;
  
  long long xq, yq;
  cin >> xq >> yq;

  set<pair<int, int>> k_hits, q_hits;

  for(int i = 0; i < 4; ++i) {
    k_hits.insert({xk + (dx[i] * a), yk + (dy[i] * b)});
    k_hits.insert({xk + (dx[i] * b), yk + (dy[i] * a)});
    
    q_hits.insert({xq + (dx[i] * a), yq + (dy[i] * b)});
    q_hits.insert({xq + (dx[i] * b), yq + (dy[i] * a)});
  }

  int ans = 0;
  for(auto position: k_hits) {
    if(q_hits.find(position) != q_hits.end())
      ans += 1;
  }
  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  size_t t;
  cin >> t;
  while(t--) {
    forked();
  }
  return 0;
}