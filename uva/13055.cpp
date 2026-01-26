/*
  user: zebnel
  created: 2026-01-26 16:51:15
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
  stack<string> st;
  for (int i = 0; i < n; i++) {
    string tp;
    cin >> tp;
    if (tp == "Sleep") {
      string x;
      cin >> x;
      st.push(x);
    } else if (tp == "Kick") {
      if (!st.empty()) {
        st.pop();
      }
    } else { // Test
      if (st.empty()) {
        cout << "Not in a dream" << '\n';
      } else {
        cout << st.top() << '\n';
      }
    }
  }

  return 0;
}

