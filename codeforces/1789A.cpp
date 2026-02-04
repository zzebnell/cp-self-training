/*
  user: zebnel
  created: 2026-02-04 15:09:31
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
    bool ok = 0;
    for (int i = 0; i < n && !ok; i++) {
      for (int j = i + 1; j < n && !ok; j++) {
        if (__gcd(a[i], a[j]) <= 2) {
          cout << "Yes" << '\n';
          ok = 1;
        }
      }
    }
    if (!ok) cout << "No" << '\n';
  }

  return 0;
}

