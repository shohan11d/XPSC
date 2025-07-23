#include <bits/stdc++.h>
using namespace std;



int main() {
  stack<int> st;
  queue<int> st2;

  int n;
  cin >> n;
  while (n--) {
    int a;
    cin >> a;
    st.push(a);
  }

  int m;
  cin >> m;
  while (m--) {
    int b;
    cin >> b;
    st2.push(b);
  }

  bool flag = true;
  if (st.size() != st2.size()) flag = false;

  int order = st.size();
  for (int i = 0; i < order; i++) {
    if (st.top() != st2.front()) {
      flag = false;
      break;
    } else {
      st.pop();
      st2.pop();
    }
  }

  flag ? cout << "YES" : cout << "NO";

  return 0;
}
