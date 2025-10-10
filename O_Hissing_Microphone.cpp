#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  stack<char> st;
  if (s.size() == 1) {
    cout << "no hiss";
    return 0;
  }
  for (auto&& i : s) {
    if (st.empty()) {
      st.push(i);
    } else if (st.top() == 's' && i == 's') {
      cout << "hiss";
      return 0;
    } else {
      st.push(i);
    }
  }

  cout << "no hiss";

  return 0;
}