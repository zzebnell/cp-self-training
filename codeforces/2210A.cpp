/*
  user: zebnel
  created: 2026-03-31 09:18:24
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
    for (int i = n; i >= 1; i--) {
      cout << i << ' ';
    }
    cout << '\n';
  }

  return 0;
}

