/*
  user: zebnel
  created: 2026-03-30 23:26:11
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;
  int n = s.size();
  string p = "hello";
  int j = 0;
  bool ok = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == p[j]) {
      j++;
      if (j == 5) {
        ok = 1;
        break;
      }
    }
  }
  cout << (ok ? "YES" : "NO") << '\n';

  return 0;
}

