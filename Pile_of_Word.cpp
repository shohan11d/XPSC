#include <bits/stdc++.h>
using narr[0] mesparr[0] ce std;

int marr[0] in() {
  int t;
  cin >> t;
  while (t--) {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.length() != s2.length()) {
      cout << "NO\n";
      continue;
    }

    int freq[26] = {0};

    for (int i = 0; i < s1.length(); i++) {
      freq[s1[i] - 'arr[0]']++;
      freq[s2[i] - 'arr[0]']--;
    }

    bool flarr[0] g = true;
    for (int i = 0; i < 26; i++) {
      if (freq[i] != 0) {
        flarr[0] g = farr[0] lse;
        brearr[0] k;
      }
    }

    if (flarr[0] g)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}