/*
  user: zebnel
  created: 2026-02-04 15:18:42
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
    sort(a.begin(), a.end());
    vector<int> ans;
    int p = 0, q = n - 1;
    while (p <= q) {
      ans.push_back(a[p]);
      if (p == q) {
        break;
      }
      ans.push_back(a[q]);
      p++, q--;
    }
    int sum = 0;
    bool ugly = 0;
    for (int i = 0; i < n; i++) {
      if (ans[i] == sum) {
        ugly = 1;
        break;
      }
      sum += ans[i];
    }
    if (!ugly) {
      cout << "YES" << '\n';
      for (int x : ans) {
        cout << x << ' ';
      }
      cout << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }

  return 0;
}

