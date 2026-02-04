/*
  user: zebnel
  created: 2026-02-04 07:19:18
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
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    vector<int> ans;
    ans.push_back(b[0]);
    for (int i = 1; i < n; i++) {
      if (b[i] >= ans.back()) {
        ans.push_back(b[i]);
      } else {
        ans.push_back(b[i]);
        ans.push_back(b[i]);
      }
    }
    cout << ans.size() << '\n';
    for (int x : ans) {
      cout << x << ' ';
    }
    cout << '\n';
  }

  return 0;
}

