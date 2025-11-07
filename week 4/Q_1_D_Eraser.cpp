#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        int ops = 0;
        int i = 0;
        while (i < n) {
            if (s[i] == 'B') {
                ++ops;
                i += k; 
            } else {
                ++i;
            }
        }
        cout << ops << '\n';
    }
    return 0;
}
