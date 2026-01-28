/*
  user: zebnel
  created: 2026-01-27 11:14:27
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
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    vector<ll> p(n + 1);
    for (int i = 0; i < n; i++) {
      p[i + 1] = p[i] + v[i];
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        ll mn = 1e14;
        ll mx = -1e14;
        int r = 0;
        while (r < n) {
          mn = min(mn, p[r + i] - p[r]);
          mx = max(mx, p[r + i] - p[r]);
          r += i;
        }
        ans = max(ans, abs(mn - mx));
      }
    }
    cout << ans << '\n';
  }

  return 0;
}

