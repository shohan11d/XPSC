#include <bits/stdc++.h>
using namespace std;

long long count_subarrays(int len, int k) {
  if (len < k) return 0;
  long long x = len - k + 1;
  return x * (x + 1) / 2;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    long long q;
    cin >> n >> k >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long res = 0;
    int len = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] <= q)
        len++;
      else {
        res += count_subarrays(len, k);
        len = 0;
      }
    }

    res += count_subarrays(len, k);
    cout << res << "\n";
  }

  return 0;
}
