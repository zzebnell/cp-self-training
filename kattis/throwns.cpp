/*
  user: zebnel
  created: 2026-01-27 08:26:40
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int _throw(int curr, int m, int n) {
  return ((curr + m) % n + n) % n;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;
  string s;
  int curr = 0;
  stack<int> st;
  for (int i = 0; i < k; i++) {
    cin >> s;
    if (s == "undo") {
      int m;
      cin >> m;
      while (m--) {
        curr = _throw(curr, -st.top(), n);
        st.pop();
      }
    } else {
      int t = stoi(s);
      st.push(t);
      curr = _throw(curr, t, n);
    }
  }
  cout << curr << '\n';

  return 0;
}

