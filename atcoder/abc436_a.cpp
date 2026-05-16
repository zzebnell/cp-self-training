/*
  user: zebnel
  created: 2026-05-16 00:05:39
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  string S;
  cin >> N >> S;
  int o = N - int(S.size());
  string ans(o, 'o');
  ans.append(S);
  cout << ans << '\n';

  return 0;
}

