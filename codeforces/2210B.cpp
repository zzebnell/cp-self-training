/*
  user: zebnel
  created: 2026-03-31 09:33:23
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
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> v[i];
    }
    vector<bool> mark(n + 1);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
      if (mark[i]) {
        break;
      }
      if (v[i] <= i) { // mark
        mark[v[i]] = 1;
        ans++;
      }
    }
    cout << ans << '\n';
  }

  return 0;
}

