/*
  user: zebnel
  created: 2026-01-29 07:51:36
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

struct misc {
  ll x, y;
  bool major;
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<misc> v(n);
    misc ini, fin;
    int majors = 0;
    for (int i = 0; i < n; i++) {
      cin >> v[i].x >> v[i].y;
      if (i < k) {
        v[i].major = 1;
        majors++;
      }
    }
    ini = v[a - 1];
    fin = v[b - 1];
    auto dist = [&](misc& m1, misc& m2) -> ll {
      return abs(m1.x - m2.x) + abs(m1.y - m2.y);
    };
    if (majors < 2) {
      cout << dist(ini, fin) << '\n';
      continue;
    }
    ll mn_ini, mn_fin;
    mn_ini = mn_fin = 1e14;
    for (int i = 0; i < n; i++) {
      if (!v[i].major) {
        continue;
      }
      mn_ini = min(mn_ini, dist(ini, v[i]));
      mn_fin = min(mn_fin, dist(fin, v[i]));
    }
    cout << min(dist(ini, fin), mn_ini + mn_fin) << '\n';
  }

  return 0;
}

