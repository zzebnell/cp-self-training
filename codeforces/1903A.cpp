/*
  user: zebnel
  created: 2026-02-02 09:46:55
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    cout << (k > 1 ? "YES" : (is_sorted(v.begin(), v.end()) ? "YES" : "NO")) << '\n';
  }

  return 0;
}

