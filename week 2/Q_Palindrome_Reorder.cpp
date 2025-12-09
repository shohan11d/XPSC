#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  vector<int> fre(26, 0);
  int odd = 0;

  for (auto ch : s) {
    fre[ch - 'A']++;
  }

  for (int i = 0; i < fre.size(); i++) {
    if (fre[i] % 2 != 0) {
      odd++;
    }
  }
  string l = "";
  string r = "";
  string m = "";
  if (odd > 1) {
    cout << "NO SOLUTION";
    return 0;
  }
  for (int i = 0; i < fre.size(); i++) {
    char c = i + 'A';
    if(fre[i]%2!=0){
      m += c;
    }

    int half = fre[i] / 2;
    l += string(half, c);
    r += string(half, c);
  }

  reverse(r.begin(), r.end());
  cout << l + m + r;
  return 0;
}
