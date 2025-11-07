#include <bits/stdc++.h>
using namespace std;

int minDel(const string &s, char c) {
  int l = 0, r = s.size() - 1, cnt = 0;
  while (l < r) {
    if (s[l] == s[r]) { l++; r--; }
    else if (s[l] == c) { cnt++; l++; }
    else if (s[r] == c) { cnt++; r--; }
    else return INT_MAX;
  }
  return cnt;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;

    int ans = INT_MAX;
    for (char c = 'a'; c <= 'z'; c++) ans = min(ans, minDel(s, c));
    cout << (ans == INT_MAX ? -1 : ans) << "\n";
  }
  return 0;
}
