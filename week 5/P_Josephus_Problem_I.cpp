#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  queue<int> q;
  for (int i = 1; i <= n; i++)
    q.push(i);

  vector<int> removal_order;

  q.push(q.front());
  q.pop();

  while (!q.empty()) {
    removal_order.push_back(q.front());
    q.pop();

    if (!q.empty()) {
      q.push(q.front());
      q.pop();
    }
  }

  for (int x : removal_order)
    cout << x << " ";
  cout << "\n";

  return 0;
}
