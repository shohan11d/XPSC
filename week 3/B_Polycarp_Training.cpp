/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    multiset<int> a;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    int problems = 1;
    int ans = 0;

    while (!a.empty())
    {
        auto lb = a.lower_bound(problems);
        if (lb != a.end())
        {
            ans++;
            a.erase(lb);
        }else
        {
            break;
        }
        problems++;
    }

    cout << ans << '\n';

    return 0;
} */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> mst;
    int days = 1;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mst.insert(x);
    }

    while (true) {
        auto found = mst.lower_bound(days);
        if (found != mst.end()) {
            mst.erase(found);
            ans++;
            days++;
        } else if (found == mst.end()) {
            break;
        }
    }
    cout << ans;
    return 0;
}