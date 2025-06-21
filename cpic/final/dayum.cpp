#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int arr[21];
  
  arr[16] = 1;
  arr[17] = 2;
  arr[18] = 3;
  arr[19] = 4;
  arr[20] = 5;
  
  int N; cin >> N;
  
  if (N >= 16 && N <=20){
	  cout << arr[N];
	  return 0;
  }
  cout << "EKET";
}
