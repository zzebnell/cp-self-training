/*
  user: zebnel
  created: 2026-01-26 16:15:41
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  int tc = 0;
  while (true) {
    cin >> s;
    if (s == "end") {
      break;
    }
    vector<stack<char>> sts;
    int n = s.size();
    for (int i = 0; i < n; i++) {
      if (sts.empty()) {
        stack<char> st;
        st.push(s[i]);
        sts.push_back(st);
      } else {
        bool found = 0;
        for (stack<char>& st : sts) {
          if (s[i] <= st.top()) {
            st.push(s[i]);
            found = 1;
            break;
          }
        }
        if (!found) {
          stack<char> st;
          st.push(s[i]);
          sts.push_back(st);
        }
      }
    }
    cout << "Case " << ++tc << ": " << sts.size() << '\n';
  }

  return 0;
}

