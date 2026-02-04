/*
  user: zebnel
  created: 2026-02-04 07:50:45
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
    int negs = 0;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      if (v[i] < 0) negs++;
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    if (sum >= 0) {
      cout << (negs & 1) << '\n';
    } else {
      int ans = (abs(sum) + 1) / 2;
      negs -= ans;
      ans += negs & 1;
      cout << ans << '\n';
    }
  }

  return 0;
}

