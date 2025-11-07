#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  vector<int> a(n), b(m);
  for (int& x : a) cin >> x;
  for (int& x : b) cin >> x;

  vector<int> merged;
  merged.reserve(n + m);

  int i = 0, j = 0;

  while (i < n && j < m) {
    if (a[i] <= b[j]) {
      merged.push_back(a[i]);
      i++;
    } else {
      merged.push_back(b[j]);
      j++;
    }
  }

  while (i < n) {
    merged.push_back(a[i]);
    i++;
  }
  while (j < m) {
    merged.push_back(b[j]);
    j++;
  }

  for (int x : merged) {
    cout << x << " ";
  }
  cout << "\n";

  return 0;
}
