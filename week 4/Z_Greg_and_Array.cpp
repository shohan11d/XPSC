#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];

    vector<int> l(m + 1), r(m + 1);
    vector<long long> d(m + 1);
    for (int i = 1; i <= m; ++i)
        cin >> l[i] >> r[i] >> d[i];

    vector<long long> op(m + 2, 0);
    for (int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        op[x] += 1;
        op[y + 1] -= 1;
    }

    for (int i = 1; i <= m; ++i) op[i] += op[i - 1];

    vector<long long> add(n + 2, 0);
    for (int i = 1; i <= m; ++i) {
        long long times = op[i];
        add[l[i]] += d[i] * times;
        add[r[i] + 1] -= d[i] * times;
    }

    for (int i = 1; i <= n; ++i) {
        add[i] += add[i - 1];
        a[i] += add[i];
    }

    for (int i = 1; i <= n; ++i)
        cout << a[i] << (i == n ? '\n' : ' ');

    return 0;
}
