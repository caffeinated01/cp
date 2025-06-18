#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  unsigned long long N; cin >> N;
  
  vector<int> v = {1, 5, 10, 50, 100, 500, 1000, 5000, 10000, 50000, 100000, 500000, 1000000}; // number of cents

  unsigned long long ans = 0;

  while (N != 0){
    ans += N/v.back();
    N -= v.back() * (N/v.back());
    v.pop_back();
    continue;
  }

  cout << ans;

  return 0;
}