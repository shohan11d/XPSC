
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        unordered_set<int> seen;
        int moves = 0;

        // Iterate from the end
        for (int i = n - 1; i >= 0; i--) {
            if (seen.count(a[i])) break;
            seen.insert(a[i]);
            moves++;
        }

        cout << n - moves << "\n";
    }

    return 0;
}