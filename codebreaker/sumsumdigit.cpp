#include <bits/stdc++.h>
using namespace std;

#define int long long

int sum_digit(int n)
{
  if (n < 10)
  {
    return n;
  }

  return n % 10 + sum_digit(n / 10);
}

int32_t main()
{
  int t;
  cin >> t;

  // pre compute prefix sum of ans up till 2 * 10^5
  vector<int> psum(200000 + 1, 0);
  for (int i = 1; i <= 200000; i++)
  {
    psum[i] = sum_digit(i) + psum[i - 1];
  }

  // solve tcs
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    cout << psum[n] << "\n";
  }
  return 0;
}