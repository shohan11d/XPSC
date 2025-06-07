#include <bits/stdc++.h>
using namespace std;
int fun(int a) { 
    int* p3 = &a;
    cout << "p3:-" << p3 << endl;
    return a; }
int main() {
  int a;
  cin >> a;
  int*p1 = &a;
  int returned_value = fun(a);
  
  int*p2 = &returned_value;
  cout << "p1 :" << p1 << endl;
  cout << "p2 " << p2;


  return 0;
}
{}[[]]
asdf jkl;
