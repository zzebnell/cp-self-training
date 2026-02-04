/*
  user: zebnel
  created: 2026-02-03 20:01:06
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
    for (int j = 0; j < 10; j++) {
      for (int i = 1; i < n - 1; i++) {
        if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
          swap(v[i], v[i + 1]);
        }
      }
    }
    cout << (is_sorted(v.begin(), v.end()) ? "YES" : "NO") << '\n';
  }

  return 0;
}

