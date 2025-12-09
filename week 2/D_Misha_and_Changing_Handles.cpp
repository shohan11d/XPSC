#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  vector<int> fre(26, 0);

  for (auto ch : s) {
    fre[ch - 'A']++;
  }

  for (int i = 0; i < fre.size(); i++) {
    cout << fre[i];
  }

  return 0;
}
