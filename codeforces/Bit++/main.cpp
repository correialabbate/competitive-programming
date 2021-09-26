// https://codeforces.com/problemset/problem/50/A

#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, n;
    cin >> m >> n;

    if (m%2==0){
      cout << (m*n)/2;
    }else{
      cout << ((m-1)*n/2)+int(floor(n/2)); 
    }
}