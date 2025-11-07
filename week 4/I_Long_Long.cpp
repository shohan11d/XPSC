#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int64 maxSum = 0;
        for (int i = 0; i < n; ++i) maxSum += llabs(a[i]);

        int ops = 0;
        int i = 0;
        while (i < n) {
            if (a[i] <= 0) {
                bool hasNeg = false;
                int j = i;
                while (j < n && a[j] <= 0) {
                    if (a[j] < 0) hasNeg = true;
                    ++j;
                }
                if (hasNeg) ++ops;
                i = j;
            } else {
                ++i;
            }
        }

        cout << maxSum << " " << ops << "\n";
    }
    return 0;
}
