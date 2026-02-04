/*
  user: zebnel
  created: 2026-02-04 14:50:18
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    bool found = 0;
    for (int x = 0; x < (1 << 8); x++) {
      vector<int> b(n);
      for (int i = 0; i < n; i++) {
        b[i] = a[i] ^ x;
      }
      int ans = 0;
      for (int i = 0; i < n; i++) {
        ans ^= b[i];
      }
      if (!ans) {
        cout << x << '\n';
        found = 1;
        break;
      }
    }
    if (!found) cout << -1 << '\n';
  }

  return 0;
}

