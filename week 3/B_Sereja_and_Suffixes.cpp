/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), cnt(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    set<int> s;
    for (int i = n; i >= 1; i--)
    {
        s.insert(a[i]);
        cnt[i] = s.size();
    }

    for (int i = 1; i <= m; i++)
    {
        int pos;
        cin >> pos;
        cout << cnt[pos] << '\n';
    }

    return 0;
} */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> vt(n + 1);
    vector<int> count(n + 1);
    set<int> st;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vt[i + 1] = x;
    }

    for (int i = n; i > 0; i--) {
        st.insert(vt[i]);
        count[i] = st.size();
    }

    while (m--) {
        int q;
        cin >> q;
        cout << count[q] << endl;
    }

    return 0;
}