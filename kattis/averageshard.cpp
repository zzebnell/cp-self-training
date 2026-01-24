/*
  user: zebnel
  created: 2026-01-24 17:50:53
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  string s;
  while (T--) {
    cin.ignore();
    getline(cin, s);
    int Ncs, Ne;
    cin >> Ncs >> Ne;
    vector<int> cs(Ncs), e(Ne);
    ll sumCS = 0, sumE = 0;
    for (int i = 0; i < Ncs; i++) {
      cin >> cs[i];
      sumCS += (ll) cs[i];
    }
    for (int i = 0; i < Ne; i++) {
      cin >> e[i];
      sumE += (ll) e[i];
    }
    int ans = 0;
    double promCS = (double) sumCS / Ncs;
    double promE = (double) sumE / Ne;
    double newPromCS, newPromE;
    for (int i = 0; i < Ncs; i++) {
      newPromCS = (double) (sumCS - cs[i]) / (Ncs - 1);
      newPromE  = (double) (sumE  + cs[i]) / (Ne  + 1);
      if (newPromCS > promCS && newPromE > promE) {
        ans++;
      }
    }
    cout << ans << '\n';
  }

  return 0;
}

