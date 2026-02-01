/*
  user: zebnel
  created: 2026-01-31 19:27:31
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

bool f(ll w, ll c, vector<ll>& v) {
  int n = v.size();
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    ll side = v[i] + 2 * w;
    sum += side * side;
    if (sum > c) return 0;
  }
  return sum <= c;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    ll n, c;
    cin >> n >> c;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    ll l = 0, r = 1e9;
    while (r - l > 1) {
      ll m = l + (r - l) / 2;
      if (f(m, c, v)) {
        l = m;
      } else {
        r = m;
      }
    }
    cout << l << '\n';
  }

  return 0;
}

