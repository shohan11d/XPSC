
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
  

    string pattern = "abc";

    string s;
    for (int i = 0; i < N; i++) {
      s += pattern[i % 3];
    }
    cout << s << "\n";
  }
}