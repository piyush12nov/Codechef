#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, numberoftimes; cin >> n >> numberoftimes;
  map<int, int> cnt;
  for (int i = 1; i <= n; ++i) {
    int x; cin >> x;
    cnt[x]++;
  }
  int cur = 0, mx = 0, R = -1,k,v;
  for (auto x : cnt) {
     k=x.first;
     v=x.second;
    if (v < numberoftimes) cur = 0;
    else {
      if (cnt.count(k-1) && cnt[k] >= numberoftimes) cur++;
      else cur = 1;
    }
    if (cur > mx) mx = cur, R = k;
  }
  if (mx == 0) cout << "-1\n";
  else cout << R - mx + 1 << " " << R << "\n";
}


int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int T; cin >> T;
  for (int i = 1; i <= T; ++i) {
    solve();
  }
}