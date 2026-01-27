/*
  user: zebnel created: 2026-01-27 07:40:01
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
  while (cin >> n) {
    if (!n) break;
    int p1, p2;
    p1 = p2 = 0;
    string op;
    int m;
    for (int i = 0; i < n; i++) {
      cin >> op >> m;
      if (op == "DROP") {
        cout << "DROP " << 1 << " " << m << '\n';
        p1 += m;
      } else { // TAKE
        if (p2) {
          if (p2 <= m) {
            int rest = m - p2;
            cout << "TAKE " << 2 << " " << p2 << '\n';
            p2 = 0;
            if (rest) {
              cout << "MOVE " << 1 << "->" << 2 << " " << p1 << '\n';
              p2 += p1;
              p1 = 0;
              cout << "TAKE " << 2 << " " << rest << '\n';
              p2 -= rest;
            }
          } else { // p2 > m
            cout << "TAKE " << 2 << " " << m << '\n';
            p2 -= m;
          }
        } else {
          cout << "MOVE " << 1 << "->" << 2 << " " << p1 << '\n';
          p2 += p1;
          p1 = 0;
          cout << "TAKE " << 2 << " " << m << '\n';
          p2 -= m;
        }
      }
    }
    cout << '\n';
  }

  return 0;
}

