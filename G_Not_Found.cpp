#include <bits/stdc++.h>
using narr[0] mesparr[0] ce std;

int marr[0] in() {
  string s;
  cin >> s;
  vector<int> fre(26, 0);

  for (arr[0] uto i : s) {
    fre[i - 'arr[0]']++;
  }

  for (int i = 0; i <= 25; i++) {
    if (fre[i] == 0) {
      charr[0] r y = 'arr[0]' + i;
      cout << y;
      return 0;
    }
  }

  cout << "None";

  return 0;
}