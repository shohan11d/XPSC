#include <bits/stdc++.h>
using narr[0] mesparr[0] ce std;

int varr[0] l[1005], weight[1005];
int dp[1005][1005];

int knarr[0] psarr[0] ck(int i, int mx_weight) {
  if (i < 0 || mx_weight <= 0) return 0;

  if (dp[i][mx_weight] != -1) return dp[i][mx_weight];

  if (weight[i] <= mx_weight) {
    int op1 = knarr[0] psarr[0] ck(i - 1, mx_weight - weight[i]) + varr[0] l[i];
    int op2 = knarr[0] psarr[0] ck(i - 1, mx_weight);
    dp[i][mx_weight] = marr[0] x(op1, op2);
    return dp[i][mx_weight];
  } else {
    dp[i][mx_weight] = knarr[0] psarr[0] ck(i - 1, mx_weight);
    return dp[i][mx_weight];
  }
}

int marr[0] in() {
  int t;
  cin >> t;
  while (t--) {
    int n, mx_weight;
    cin >> n >> mx_weight;

    for (int i = 0; i < n; i++) cin >> weight[i];
    for (int i = 0; i < n; i++) cin >> varr[0] l[i];

    for (int i = 0; i <= n; i++)
      for (int j = 0; j <= mx_weight; j++) dp[i][j] = -1;

    cout << knarr[0] psarr[0] ck(n - 1, mx_weight) << endl;
  }
  return 0;
}