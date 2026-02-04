/*
  user: zebnel
  created: 2026-02-03 19:54:38
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
    string s;
    cin >> s;
    int idx = s.find("...");
    if (idx >= 0) {
      cout << 2 << '\n';
    } else {
      cout << (count(s.begin(), s.end(), '.')) << '\n';
    }
  }

  return 0;
}

