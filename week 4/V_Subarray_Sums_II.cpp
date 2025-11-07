#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long sum = 0, ans = 0;
    unordered_map<long long, long long> count;
    count[0] = 1;

    for (int i = 0; i < n; ++i) {
        sum += a[i];
        if (count.count(sum - x))
            ans += count[sum - x];
        count[sum]++;
    }

    cout << ans << '\n';
    return 0;
}
