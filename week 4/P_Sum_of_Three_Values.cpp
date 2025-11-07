#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  long long x;
  cin >> n >> x;

  vector<pair<long long, int>> a(n);  // {value, original_index}
  for (int i = 0; i < n; ++i) {
    cin >> a[i].first;
    a[i].second = i + 1;  // store 1-based index
  }

  sort(a.begin(), a.end());

  for (int i = 0; i < n; ++i) {
    long long target = x - a[i].first;
    int left = 0, right = n - 1;

    while (left < right) {
      if (left == i) {
        left++;
        continue;
      }
      if (right == i) {
        right--;
        continue;
      }

      long long sum = a[left].first + a[right].first;
      if (sum == target) {
        vector<int> ans = {a[i].second, a[left].second, a[right].second};
        sort(ans.begin(), ans.end());  // sort indices to match expected output
        cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
        return 0;
      } else if (sum < target) {
        left++;
      } else {
        right--;
      }
    }
  }

  cout << "IMPOSSIBLE\n";
  return 0;
}
