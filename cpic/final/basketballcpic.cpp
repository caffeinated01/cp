#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int N; cin >> N;
  
  int ans = 0;
  
  for (int i=0; i<N; i++){
		int s; cin >> s;
		if (s%2 == 0){
			ans++;
		}
  }
  
  cout << ans;
}
