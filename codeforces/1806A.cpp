/*
  user: zebnel
  created: 2026-02-04 08:34:18
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((c <= a && d >= b) || (c > a && d >= b + (c - a))) { // yes
      int ans = 0;
      int bck = max(0, a - c);
      ans += bck;
      a -= bck;
      int fnt = max(0, c - a);
      ans += fnt;
      a += fnt;
      b += fnt;
      ans += 2 * (d - b);
      cout << ans << '\n';
    } else {
      cout << -1 << '\n';
    }
  }

  return 0;
}

