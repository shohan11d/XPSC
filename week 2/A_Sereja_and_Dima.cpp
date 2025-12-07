#include <bits/stdc++.h>
using namespace std;

/* int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  deque<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    // cout << a[i] << " " << endl;
  }


  int turn = true;
  int ser = 0, dim = 0;

  while (!a.empty()) {
    if (turn) {
      if (a.front() > a.back()) {
        ser += a.front();
        a.pop_front();
        turn = 0;
      } else {
        ser += a.back();
        a.pop_back();
        turn = 1;
      }if(a.front()== a.back()){
      }

    } else {

      if (a.front() > a.back()) {
        dim += a.front()    ;
        a.pop_front();
        turn = 1;
      } else {
        dim += a.back();
        a.pop_back();
        turn = 1;
      }
    }
  }
  // cout << ser << " " << dim << "\n";
  return 0;
}

 */
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  deque<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ser = 0, dim = 0;

  int turn = 1;

  while (!a.empty()) {
    if (turn % 2 == 1 ) {
      // ser
      if (a.front() < a.back()) {
        ser+= a.back();
        a.pop_back();
      } else {
        ser+= a.front();
        a.pop_front();
      }
    } else {
      // dim
      if (a.front() < a.back()) {
        dim += a.back();
        a.pop_back();
      } else {
        dim += a.front();
        a.pop_front();
      }
    }
    turn++;
  }

  cout << ser << " " << dim << "\n";

  return 0;
}
