/*
  user: zebnel
  created: 2026-02-03 20:22:17
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
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    int c = 0;
    int idx = x.find(s);
    while (c < 10 && idx < 0) {
      x.append(x);
      c++;
      idx = x.find(s);
    }
    cout << (idx < 0 ? -1 : c) << '\n';
  }

  return 0;
}

