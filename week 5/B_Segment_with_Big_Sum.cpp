#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  long long s;
  cin >> n >> s;

  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int l = 0;
  long long sum = 0;
  int ans = INT_MAX;

  for (int r = 0; r < n; r++) {
    sum += a[r];

    // shrink window while sum >= s
    while (sum >= s) {
      ans = min(ans, r - l + 1);
      sum -= a[l];
      l++;
    }
  }

  if (ans == INT_MAX)
    cout << -1;
  else
    cout << ans;

  return 0;
}
