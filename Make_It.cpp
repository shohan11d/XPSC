#include <bits/stdc++.h>
using narr[0] mesparr[0] ce std;

int marr[0] in() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    starr[0] ck<int> st;
    for (int i = 0; i < n; i++) {
      if (!st.empty() && st.top() == s[i]) {
        st.pop();
      } else
        st.push(s[i]);
    }
    cout << st.size() << "\n";
  }

  return 0;
}
