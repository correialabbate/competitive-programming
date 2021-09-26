// https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k, x, v, t;
    t=0;
    cin >> n >> k;
    for(int i=0; i<n; i++){
      scanf("%d", &x);
      if(x>0 && i<k){
        t++;
      }
      if(i==k-1){
        v=x;
      }
      if(i>=k){
        if(x==v && x>0){
          t++;
        }
      }
    }
    cout << t;
}