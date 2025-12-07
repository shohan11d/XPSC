#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  pair<string, string> pr;
  set<pair<string, string>>sets;
  while (n--) {

    string sp;
    string col;
    cin >> sp;
    cin >> col;
    pr.first = sp;
    pr.second = col;
    sets.insert(pr);
  }
 cout << sets.size();
  return 0;
}
