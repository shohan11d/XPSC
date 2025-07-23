#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int> st;

  int n;
  cin >> n;
  while (n--) {
    int a;
    cin >> a;
    st.push(a);
  }

  stack<int> st2;
  int count = 0;
  while (count < 5) {
    st2.push(st.top());
    st.pop();
    count++;
  }
  while (!st2.empty()) {
    cout << st2.top() << " ";
    st2.pop();
}

  return 0;
}
