#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    string s;
    cin >> s;

    vector<long long> l_vals, r_vals;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'L')
        l_vals.push_back(a[i]);
      else
        r_vals.push_back(a[i]);
    }

    sort(l_vals.rbegin(), l_vals.rend());
    sort(r_vals.rbegin(), r_vals.rend());

    int k = min(l_vals.size(), r_vals.size());
    long long score = 0;
    for (auto x : a) score += x;  // sum of all numbers
    for (int i = 0; i < k; i++)
      score += l_vals[i] + r_vals[i];  // add extra for matched pairs

    cout << score << "\n";
  }
}
