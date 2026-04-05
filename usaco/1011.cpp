/*
  user: zebnel
  created: 2026-03-31 08:51:25
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

struct point {
  int x, y;
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  freopen("triangles.in", "r", stdin);
  freopen("triangles.out", "w", stdout);

  int n;
  cin >> n;
  vector<point> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].x >> v[i].y;
  }
  point p1, p2, p3;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    p1 = v[i];
    for (int j = i + 1; j < n; j++) {
      p2 = v[j];
      for (int k = j + 1; k < n; k++) {
        p3 = v[k];
        if (p1.y == p2.y) {
          if (p3.x == p1.x || p3.x == p2.x) {
            ans = max(ans, abs(p1.x - p2.x) * abs(p3.y - p1.y));
          }
        } else if (p1.y == p3.y) {
          if (p2.x == p1.x || p2.x == p3.x) {
            ans = max(ans, abs(p1.x - p3.x) * abs(p2.y - p1.y));
          }
        } else if (p2.y == p3.y) {
          if (p1.x == p3.x || p1.x == p2.x) {
            ans = max(ans, abs(p3.x - p2.x) * abs(p1.y - p2.y));
          }
        }
      }
    }
  }
  cout << ans << '\n';

  return 0;
}

