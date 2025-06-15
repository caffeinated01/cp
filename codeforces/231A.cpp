#include <bits/stdc++.h>
using namespace std;


int main(){
  int a, total;
  cin >> a;

  total = 0;

  for (int i=0; i < a; i++){
    int p,v,t;
    cin >> p >> v >> t;
    if (p+v+t >= 2) {
      total += 1;
    }
  }

  cout << total;
}

