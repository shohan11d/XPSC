#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  const int MAX = 200000;
  int n, k, q;
  cin >> n >> k >> q;

  vector<int> diff(MAX + 2, 0);

  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    diff[l]++;
    diff[r + 1]--;
  }

  vector<int> freq(MAX + 2, 0);
  for (int i = 1; i <= MAX; i++) freq[i] = freq[i - 1] + diff[i];

  vector<int> pref(MAX + 2, 0);
  for (int i = 1; i <= MAX; i++) pref[i] = pref[i - 1] + (freq[i] >= k);

  while (q--) {
    int a, b;
    cin >> a >> b;
    cout << pref[b] - pref[a - 1] << '\n';
  }
}
