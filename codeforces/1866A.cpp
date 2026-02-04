/*
  user: zebnel
  created: 2026-02-04 07:14:41
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int ans = INF;
  for (int i = 0; i < n; i++) {
    ans = min(ans, abs(v[i]));
  }
  cout << ans << '\n';

  return 0;
}

