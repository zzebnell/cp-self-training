/*
  user: zebnel
  created: 2026-01-27 08:53:52
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

map<string, string> mp;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  mp["("] = ")";
  mp["["] = "]";
  mp["{"] = "}";
  mp["<"] = ">";
  mp["(*"] = "*)";
  string s;
  while (cin >> s) {
    vector<string> st;
    int n = s.size();
    int k = 1;
    bool cont = 1;
    for (int i = 0; i < n; i++, k++) {
      if (s[i] == '(' || s[i] == '[' || s[i] == '{' || s[i] == '<') { // is open
        if (s[i] == '(' && ((i + 1) < n) && (s[i + 1] == '*')) {
          st.push_back("(*");
          i++;
        } else {
          st.push_back(string(1, s[i]));
        }
      } else {
        if (s[i] == ')' || s[i] == ']' || s[i] == '}' || s[i] == '>') { // close
          if (!st.empty() && (string(1, s[i]) == mp[st.back()])) {
            st.pop_back();
          } else {
            cont = 0;
            cout << "NO " << k << '\n';
            break;
          }
        } else {
          if (s[i] == '*' && ((i + 1) < n) && (s[i + 1] == ')')) {
            if (!st.empty() && ("*)" == mp[st.back()])) {
              st.pop_back();
              i++;
            } else {
              cont = 0;
              cout << "NO " << k << '\n';
              break;
            }
          }
        }
      }
    }
    if (cont) {
      if (st.empty()) {
        cout << "YES" << '\n';
      } else {
        cout << "NO " << k << '\n';
      }
    }
  }

  return 0;
}

