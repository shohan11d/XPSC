#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update
> ordered_set;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    ordered_set os;
    for (int i = 1; i <= n; i++) os.insert(i);

    vector<int> result;
    long long idx = 0;

    for (int removed = 0; removed < n; removed++) {
        long long sz = os.size();
        idx = (idx + k) % sz;
        auto it = os.find_by_order(idx);
        result.push_back(*it);
        os.erase(it);
    }

    for (int x : result) cout << x << " ";
    cout << "\n";

    return 0;
}
