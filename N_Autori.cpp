#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;

  string empty_str = "";
  for (int i = 0; i < str.size(); i++) {
    if (i ==0) {
      empty_str += str[i];
    } 
    if (str[i] == '-') {
        if (i > 0) {
          empty_str += str[i + 1];  // previous character
        }
      }
  }

  cout << empty_str;
  return 0;
}