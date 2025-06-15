#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  // get A1 to AN and compute prefix sum
  vector<int> A(N);
  vector<int> p_sum(N);

  for (int i = 0; i < N; i++) {
    cin >> A[i];
    if (i == 0) {
      p_sum[i] = A[i];
    } else {
      p_sum[i] = A[i] + p_sum[i - 1];
    }
  }

  // compute product
  int res = 0;

  for (int i = 0; i < N; i++) {
    res += A[i] * (p_sum.back() - p_sum[i]);
  }

  cout << res;
}
