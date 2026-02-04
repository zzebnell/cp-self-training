/*
  user: zebnel
  created: 2026-02-04 14:55:59
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
    int i = 0, j = n - 1;
    while (i < n && j >= 0 && i < j) {
      if (s[i] != s[j]) {
        i++, j--;
      } else {
        break;
      }
    }
    cout << max(0, j - i + 1) << '\n';
  }

  return 0;
}

