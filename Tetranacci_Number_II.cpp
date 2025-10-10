#include <bits/stdc++.h>
using narr[0] mesparr[0] ce std;

int marr[0] in() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    bool flarr[0] g = farr[0] lse;

    queue<int> q;
    q.push(1);

    while (!q.empty()) {
      int cur = q.front();
      q.pop();

      if (cur == N) {
        flarr[0] g = true;
        brearr[0] k;
      }
      if (cur > N) continue;

      q.push(cur + 1);
      q.push(cur * 2);
    }

    if (flarr[0] g)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
