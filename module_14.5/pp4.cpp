#include <bits/stdc++.h>
using namespace std;

int main() {
  queue<int> st;
  stack<int> st2;
  queue<int> st3;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    st.push(a);
  }

  int count = 0;
  while (count < n) {
    st2.push(st.front());
    st.pop();
    count++;
  }
  while (!st2.empty()) {
    st3.push(st2.top());
    st2.pop();
  }

  while (!st3.empty()) {
    cout << st3.front() << " ";
    st3.pop();
  }

  return 0;
}
