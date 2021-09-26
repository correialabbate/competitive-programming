// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d", &n);

    string x;
    for(int i=0; i<n; i++){
      cin >> x;
      if(x.length() <= 10){
        cout << x << "\n";
      } else{
        cout << string(1, x.at(0)) + to_string(x.length()-2) + string(1, x.at(x.length()-1)) << "\n";
      }
    }
}