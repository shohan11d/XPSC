#include <bits/stdc++.h>
using namespace std;

class Node {
 public:
  int val;
  Node* next;
  Node* prev;

  Node(int value) {
    val = value;
    next = NULL;
    prev = NULL;
  }
};

class Stack {
 public:
  Node* header = NULL;
  Node* tail = NULL;
  int sz = 0;

  void push(int val) {
    Node* newnode = new Node(val);
    if (header == NULL) {
      header = newnode;
      tail = newnode;
      sz++;
      return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    sz++;
  }

  void pop() {
    if (header == NULL) return;

    Node* del = tail;

    if (header == tail) {
      header = NULL;
      tail = NULL;
    } else {
      tail = tail->prev;
      tail->next = NULL;
    }

    delete del;
    sz--;
  }

  int size() { return sz; }

  int top() { return tail->val; }

  bool empty() { return header == NULL; }
};

int main() {
  Stack st;

  int n;
  int w;
  cin >> n;
  w = n;
  while (n--) {
    int a;
    cin >> a;
    st.push(a);
  }

  Stack st2;
  int m;
  cin >> m;
  while (m--) {
    int b;
    cin >> b;
    st2.push(b);
  }

  bool flag = true;
  if (st.size() != st2.size()) {
    flag = false;
    flag ? cout << "YES" : cout << "NO";

    return 0;
  }

  for (int i = 0; i < w; i++) {
    if (st.top() != st2.top()) {
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
