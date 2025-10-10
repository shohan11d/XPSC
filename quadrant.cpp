#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y; 
    if(x>0 && y>0) {
        cout << 1;
        return 0;
    } else if(x>0 && y<0){
        cout << 4;
        return 0;
    } else if(x<0 && y>0){
        cout << 2;
        return 0;
    }else if(x<0 && y<0){
        cout << 3;
        return 0;
    }
  return 0;
}