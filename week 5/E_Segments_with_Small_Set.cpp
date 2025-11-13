#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    map<int,int> freq; // frequency of elements in current window
    int l = 0, r = 0;
    long long ans = 0;

    while (r < n) {
        freq[a[r]]++; // add current element

        // shrink window if unique elements exceed k
        while ((int)freq.size() > k && l <= r) {
            freq[a[l]]--;
            if (freq[a[l]] == 0) freq.erase(a[l]);
            l++;
        }

        // all subarrays ending at r are good
        ans += r - l + 1;

        r++;
    }

    cout << ans << '\n';
    return 0;
}
