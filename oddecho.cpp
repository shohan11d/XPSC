#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
    cin >> t;
    vector<string>ar;
    
    while(t--){
        string  x;
        cin >> x;
        ar.push_back(x);
    }
    
    for (int i = 0; i < ar.size(); i=i+2)
    {
        cout << ar[i] << endl;
    }
  return 0;
}