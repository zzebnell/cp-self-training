/*
  user: zebnel
  created: 2026-02-04 07:31:41
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
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1) { // i can use 1
      cout << "YES" << '\n';
      cout << n << '\n';
      for (int i = 0; i < n; i++) {
        cout << 1 << ' ';
      }
      cout << '\n';
    } else {
      if (k > 1) {
        if (n & 1) {
          if (k >= 3) {
            cout << "YES" << '\n';
            n -= 3;
            int ans = n / 2;
            cout << ans + 1 << '\n';
            cout << 3 << ' ';
            for (int i = 0; i < n / 2; i++) {
              cout << 2 << ' ';
            }
            cout << '\n';
          } else {
            cout << "NO" << '\n';
          }
        } else {
          cout << "YES" << '\n';
          cout << n / 2 << '\n';
          for (int i = 0; i < n / 2; i++) {
            cout << 2 << ' ';
          }
          cout << '\n';
        }
      } else {
        cout << "NO" << '\n';
      }
    }
  }

  return 0;
}

