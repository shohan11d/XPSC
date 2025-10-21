
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        string b;
        cin >> n >> b;

        set<char> st(b.begin(), b.end());
        string r(st.begin(), st.end());

        unordered_map<char, char> mp;
        int m = r.size();
        for(int i = 0; i < m; i++) {
            mp[r[i]] = r[m-1-i];
        }

        string s;
        for(char c : b) s += mp[c];

        cout << s << "\n";
    }

    return 0;
}
