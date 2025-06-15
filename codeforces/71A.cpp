#include <bits/stdc++.h>
using namespace std;


int main(){
  int a;
  cin >> a;
  for (int i = 0; i < a; i++){
    string b;
    cin >> b;
    if (b.length() > 10){
      cout << "\n" << b[0] << (b.length() - 2) << b.back() << "\n";
    } else{
      cout << "\n" << b << "\n";
    }
  }
}
