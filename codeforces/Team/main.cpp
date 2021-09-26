// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d", &n);

    int x, y, z, t;
    t=0;
    for(int i=0; i<n; i++){
      cin >> x >> y >> z;
      if(x + y + z >= 2){
        t++;
      }
    }
    cout << t;
}