/*
  user: zebnel
  created: 2026-01-21 16:15:29
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
  for (int i = 0; i < n; i++) {
    ll k = i + 1;
    ll ans = (k * k * (k * k - 1)) / 2 - (4 * (k - 1) * (k - 2));
    cout << ans << '\n';
  }

  return 0;
}

