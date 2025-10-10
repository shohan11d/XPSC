#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    int count = 1;
    for (int i = 1; i <= x; i++) {
      count = count * i;
    }
    int res = count % 10;
    cout << res << endl;
  }

  return 0;
}