/*
  user: zebnel
  created: 2026-03-29 17:54:26
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

struct comp {
  string s;
  int l, r;
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  freopen("traffic.in", "r", stdin);
  freopen("traffic.out", "w", stdout);

  int n;
  cin >> n;
  vector<comp> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].s >> v[i].l >> v[i].r;
  }
  int l = 0, r = 1e8;
  for (int i = n - 1; i >= 0; i--) {
    if (v[i].s == "none") { // get the average
      l = max(l, v[i].l);
      r = min(r, v[i].r);
    } else if (v[i].s == "on") {
      l -= v[i].r;
      l = max(0, l);
      r -= v[i].l;
      r = max(0, r);
    } else { // "off"
      l += v[i].l;
      r += v[i].r;
    }
  }
  cout << l << ' ' << r << '\n';
  l = 0, r = 1e8;
  for (int i = 0; i < n; i++) {
    if (v[i].s == "none") { // get the average
      l = max(l, v[i].l);
      r = min(r, v[i].r);
    } else if (v[i].s == "on") {
      l += v[i].l;
      r += v[i].r;
    } else { // "off"
      l -= v[i].r;
      l = max(0, l);
      r -= v[i].l;
      r = max(0, r);
    }
  }
  cout << l << ' ' << r << '\n';

  return 0;
}

