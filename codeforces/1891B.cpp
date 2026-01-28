/*
  user: zebnel
  created: 2026-01-28 07:28:39
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

struct misc {
  ll e, idx, num;
};

void _sort(vector<misc>& v) {
  sort(v.begin(), v.end(), [&](misc& m1, misc& m2) {
      return m1.e < m2.e;
      });
}

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
    vector<misc> v(n);
    for (int i = 0; i < n; i++) {
      ll xx = a[i];
      v[i].num = a[i];
      v[i].idx = i;
      while (!(xx & 1)) {
        xx >>= 1;
        v[i].e++;
      }
    }
    _sort(v);
    for (int i = 0; i < q; i++) {
      // search for lower bound
      /*for (misc& m : v) {
        cout << "(" << m.e << ", " << m.num << ", " << m.idx << ") ";
      }*/
      int l = -1, r = n;
      while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (v[m].e >= x[i]) {
          r = m;
        } else {
          l = m;
        }
      }
      bool f = 0;
      for (int j = r; j < n; j++) {
        v[j].num += (1LL << (x[i] - 1));
        v[j].e = 0;
        ll xx = v[j].num;
        while (!(xx & 1)) {
          xx >>= 1;
          v[j].e++;
        }
        f = 1;
      }
      if (f) _sort(v);
    }
    sort(v.begin(), v.end(), [&](misc& m1, misc& m2) {
        return m1.idx < m2.idx;
        });
    for (misc& m : v) {
      cout << m.num << ' ';
    }
    cout << '\n';
  }

  return 0;
}

