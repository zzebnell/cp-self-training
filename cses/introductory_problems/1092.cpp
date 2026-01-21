/*
  user: zebnel
  created: 2026-01-21 16:24:11
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n;
  cin >> n;
  vector<int> v(n);
  iota(v.begin(), v.end(), 1);
  set<ll> st(v.begin(), v.end());
  ll sum = n * (n + 1) / 2;
  if (sum & 1) {
    cout << "NO" << '\n';
    return 0;
  }
  ll target = sum / 2;
  set<int> first;
  while (target) {
    auto it = st.lower_bound(target);
    if (it == st.end()) {
      --it;
    }
    target -= *it;
    first.insert(*it);
    st.erase(it);
  }
  cout << "YES" << '\n';
  cout << first.size() << '\n';
  for (int x : first) {
    cout << x << ' ';
  }
  cout << '\n' << st.size() << '\n';
  for (int x : st) {
    cout << x << ' ';
  }
  cout << '\n';

  return 0;
}

