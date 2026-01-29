/*
  user: zebnel
  created: 2026-01-29 07:15:25
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
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), x(q);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < q; i++) {
      cin >> x[i];
    }
    int last = 31;
    for (int i = 0; i < q; i++) {
      if (x[i] < last) {
        for (int j = 0; j < n; j++) {
          if (a[j] % (1LL << x[i]) == 0) {
            a[j] += (1LL << (x[i] - 1));
          }
        }
        last = x[i];
      }
    }
    for (ll k : a) {
      cout << k << ' ';
    }
    cout << '\n';
  }

  return 0;
}

