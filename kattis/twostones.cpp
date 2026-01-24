/*
  user: zebnel
  created: 2026-01-24 17:05:41
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  cout << (n & 1 ? "Alice" : "Bob") << '\n';

  return 0;
}
