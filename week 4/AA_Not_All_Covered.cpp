#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  vector<int> diff(N + 2, 0);
  vector<pair<int, int>> turrets(M);

  for (int i = 0; i < M; i++) {
    int L, R;
    cin >> L >> R;
    turrets[i] = {L, R};
    diff[L] += 1;
    diff[R + 1] -= 1;
  }

  vector<int> coverage(N + 1, 0);
  coverage[0] = 0;
  for (int i = 1; i <= N; i++) {
    coverage[i] = coverage[i - 1] + diff[i];
  }

  for (int i = 1; i <= N; i++) {
    if (coverage[i] == 0) {
      cout << 0 << "\n";
      return 0;
    }
  }

  int ans = INT_MAX;
  for (int i = 1; i <= N; i++) {
    ans = min(ans, coverage[i]);
  }

  cout << ans << "\n";
}
