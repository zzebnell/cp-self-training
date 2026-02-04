/*
  user: zebnel
  created: 2026-02-04 08:09:23
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
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int i = 0;
    int ans = -INF;
    while (i < n) {
      while (i < n && v[i]) i++;
      int k = 0;
      while (i < n && !v[i]) {
        k++;
        i++;
      }
      ans = max(ans, k);
    }
    cout << ans << '\n';
  }

  return 0;
}

