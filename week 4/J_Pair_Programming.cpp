#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int j = 0; j < m; ++j) cin >> b[j];

        vector<int> res;
        int i = 0, j = 0;
        int lines = k;
        bool ok = true;

        while (i < n || j < m) {
            bool moved = false;

            // Rule 1: Always process any 0 first (prefer Monocarp's if both)
            if (i < n && a[i] == 0) {
                res.push_back(0);
                ++lines;
                ++i;
                moved = true;
            }
            else if (j < m && b[j] == 0) {
                res.push_back(0);
                ++lines;
                ++j;
                moved = true;
            }
            // Rule 2: Then process valid line edits
            else if (i < n && a[i] <= lines) {
                res.push_back(a[i]);
                ++i;
                moved = true;
            }
            else if (j < m && b[j] <= lines) {
                res.push_back(b[j]);
                ++j;
                moved = true;
            }

            if (!moved) {
                ok = false;
                break;
            }
        }

        if (!ok)
            cout << -1 << '\n';
        else {
            for (int x : res) cout << x << ' ';
            cout << '\n';
        }
    }

    return 0;
