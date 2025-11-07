#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<long long> x(n + 1, 0);  // 1-indexed
    for (int i = 1; i <= n; ++i) cin >> x[i];

    // Build prefix sums
    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; ++i)
        pref[i] = pref[i - 1] + x[i];

    // Answer queries
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << pref[b] - pref[a - 1] << '\n';
    }

    return 0;
}
