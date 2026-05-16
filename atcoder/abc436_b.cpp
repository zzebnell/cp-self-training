/*
  user: zebnel
  created: 2026-05-16 00:11:48
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
  vector<vector<int>> v(n, vector<int>(n));
  vector<vector<bool>> empty(n, vector<bool>(n, 1));
  int r, c;
  r = 0, c = (n - 1) / 2;
  int k = 1;
  v[r][c] = k;
  int t = n * n - 1;
  empty[r][c] = 0;
  while (t--) {
    int i = ((r - 1) % n + n) % n;
    int j = ((c + 1) % n + n) % n;
    if (empty[i][j]) {
      v[i][j] = k + 1;
      k = v[i][j];
      r = i, c = j;
      empty[i][j] = 0;
    } else {
      i = ((r + 1) % n + n) % n;
      j = c;
      v[i][j] = k + 1;
      k = v[i][j];
      r = i, c = j;
      empty[i][j] = 0;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << v[i][j] << ' ';
    }
    cout << '\n';
  }

  return 0;
}
