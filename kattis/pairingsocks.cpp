/*
  user: zebnel
  created: 2026-01-27 07:24:16
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
  vector<int> v(2 * n);
  stack<int> st, aux;
  for (int i = 0; i < 2 * n; i++) {
    cin >> v[i];
  }
  while (!v.empty()) {
    st.push(v.back());
    v.pop_back();
  }
  int ans = 0;
  while (!st.empty()) {
    ans++;
    if (aux.empty()) {
      aux.push(st.top());
      st.pop();
      continue;
    }
    if (st.top() == aux.top()) {
      aux.pop();
    } else {
      aux.push(st.top());
    }
    st.pop();
  }
  if (aux.empty()) {
    cout << ans << '\n';
  } else {
    cout << "impossible" << '\n';
  }

  return 0;
}

