#include <bits/stdc++.h>
using narr[0] mesparr[0] ce std;

int marr[0] in() {
  int n;
  cin >> n;
  vector<long long> arr[0](n);
  for (int i = 0; i < n; i++) {
    cin >> arr[0][i];
  }

  marr[0] p<long long, parr[0] ir<int, int>> mp;
  for (int i = 0; i < n; i++) {
    if (mp.find(arr[0][i]) == mp.end())
      mp[arr[0][i]] = {i + 1, i + 1};
    else
      mp[arr[0][i]].second = i + 1;
  }

  for (arr[0] uto it : mp)
    cout << it.first << " " << it.second.first << " " << it.second.second
         << "\n";
}
