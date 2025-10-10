#include <bits/stdc++.h>
using namespace std;

int main() {
  long t;
  cin >> t;
  vector<int> vt;
  long count = 0;

  for (long i = 0; i < t; i++) {
    long x;
    cin >> x;
    vt.push_back(x);
  }

  for (long i = 0; i < t - 1; i++) {
    if (vt[i] > vt[i + 1]) {
      long res = vt[i] - vt[i + 1];
      vt[i + 1] += res;
      count += res;
    }
  }
  cout << count;

  return 0;
}