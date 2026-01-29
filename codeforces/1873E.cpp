/*
  user: zebnel
  created: 2026-01-29 07:25:09
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

bool f(vector<ll>& v, ll h, ll x) {
  int n = v.size();
  ll used = 0;
  for (int i = 0; i < n; i++) {
    used += max(0LL, h - v[i]);
  }
  return used <= x;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    ll l = 0, r = 1e11;
    while (r - l > 1) {
      ll m = l + (r - l) / 2;
      if (f(v, m, x)) {
        l = m;
      } else {
        r = m;
      }
    }
    cout << l << '\n';
  }

  return 0;
}

