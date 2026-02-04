/*
  user: zebnel
  created: 2026-02-04 08:14:50
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
    ll n, k;
    cin >> n >> k;
    if (n & 1) {
      cout << ((k & 1) ? "YES" : "NO") << '\n';
    } else {
      cout << "YES" << '\n';
    }
  }

  return 0;
}

