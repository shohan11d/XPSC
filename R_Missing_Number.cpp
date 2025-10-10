#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vt;

  for (int i = 0; i < n - 1; i++) {
    int x;
    cin >> x;

    if (n == 2 && x == 1) {
      cout << 2;
      return 0;
    } else if (n == 2 && x == 2) {
      cout << 1;
      return 0;
    }
    vt.push_back(x);
  }

  sort(vt.begin(), vt.end());
  //   for (auto&& i : vt) {
  //     cout << i << " ";
  //   }
  for (int i = 0; i < n - 1; i++) {
    if (vt[i] + 1 != vt[i + 1]) {
      cout << vt[i] + 1;
      return 0;
    }
  }

  return 0;
}