#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> d(n);
    for (int i = 0; i < n; ++i) cin >> d[i];

    vector<long long> pref(n + 1, 0), suff(n + 2, 0);
    for (int i = 1; i <= n; ++i) pref[i] = pref[i - 1] + d[i - 1];
    for (int i = n; i >= 1; --i) suff[i] = suff[i + 1] + d[i - 1];

    set<long long> suff_set;
    for (int i = 1; i <= n; ++i) suff_set.insert(suff[i]);

    long long ans = 0;
    for (int i = 0; i <= n; ++i) {
        if (suff_set.count(pref[i])) ans = max(ans, pref[i]);
    }

    cout << ans << '\n';
}
