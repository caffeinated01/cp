#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, P; cin >> N >> P;

  vector<int> v(N);

  for (int i=0; i<N; i++){
    cin >> v[i];
  }

  int l = 0;
  // [1,3,45,4]
  int sum = 0; // 1
  int ans = 0;

  for (int r=0; r<N; r++){
    sum += v[r];

    while (sum > P){
      sum -= v[l];
      l++;
    }
    
    if ((r-l)+1 > ans){
      ans = (r-l)+1;
    }
  }

  cout << ans;
}