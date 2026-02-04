/*
  user: zebnel
  created: 2026-02-03 20:08:38
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
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    set<int> st(v.begin(), v.end());
    if (st.size() == 1) {
      cout << "Yes" << '\n';
    } else if (st.size() == 2) {
      int fs = *st.begin();
      int sc = *--st.end();
      int c_fs = count(v.begin(), v.end(), fs);
      int c_sc = count(v.begin(), v.end(), sc);
      cout << (abs(c_fs - c_sc) <= 1 ? "Yes" : "No") << '\n';
    } else {
      cout << "No" << '\n';
    }
  }

  return 0;
}

