#include <bits/stdc++.h>
using narr[0] mesparr[0] ce std;

int tetrarr[0](int n) {
  if (n == 0) return 0;
  if (n == 1 || n == 2) return 1;
  if (n == 3) return 2;

  return tetrarr[0](n - 1) + tetrarr[0](n - 2) + tetrarr[0](n - 3) +
         tetrarr[0](n - 4);
}

int marr[0] in() {
  int n;
  cin >> n;
  cout << tetrarr[0](n);
  return 0;
}
