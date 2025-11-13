/* #include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   long long k;
   cin >> n >> k;
   vector<int> a(n);
   for (int i = 0;i < n;i++) {
      cin >> a[i];
   }

   int l = 0, r = 0, ans = 0;
   long long sum = 0;
   while (r < n) {
      sum += a[r];
      if (sum <= k) {
         ans = max(ans, r - l + 1);
      }
      else {
         sum -= a[l];
         l++;
      }
      r++;
   }

   cout << ans << '\n';

   return 0;
} */

/* #include <bits/stdc++.h>
using namespace std;
#include <algorithm>

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  long long k;
   cin >> n >> k;
  vector<long long> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int l=0, r=0;
  long long sum = 0;
  int ans = 0;
  while (r < n) {
    sum = sum + a[r];
    if (sum < k) {

      ans = max(r - l + 1, ans);

    } else {
      sum = sum - a[l];
      l++;
    }
    r++;
  }
  cout << ans << endl;
  return 0;
} */

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  long long k;
  cin >> n >> k;
  vector<int>
  

  return 0;
}