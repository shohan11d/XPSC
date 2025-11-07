#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<char> vt(n);
    for (int i = 0; i < n; i++) {
      vt[i] = s[i];
    }

    for (int i = 0; i < n - 1; i++) {
      if (vt[i] == '1' && vt[i + 1] == '0') {
        vt[i + 1] = '1';
      }
    }

    int safe = 0;
    for (int i = 0; i < n; i++) {
      if (vt[i] == '0') safe++;
    }

    cout << safe << "\n";
  }

  return 0;
  hello
}
