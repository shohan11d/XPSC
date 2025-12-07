#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  vector<int> freq(26,0);

  for(int i=0;i<s.length();i++){
    freq[s[i]-"a"]++;
  }


  return 0;
}
