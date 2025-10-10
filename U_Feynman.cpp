#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int x;
    cin >> x;
    if (x = 0) return 0;

    int total = 0;
    for (int i = 1; i <= x; i++) {
      total = total + i ^ 2;
    }

    cout << total << endl;
  }

  return 0;
}