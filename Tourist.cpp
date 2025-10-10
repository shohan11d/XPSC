#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, a, b;
    cin >> n >> a >> b;
    int shortest_dis = INT_MAX;
    for (int i = 0; i < n; i++) {
      int c, d;

      cin >> c >> d;

      int cur_dis = abs(a - c) + abs(b - d);

        if (cur_dis < shortest_dis) {
          shortest_dis = cur_dis;
        }
    }
    cout << shortest_dis << endl;
  }

  return 0;
}