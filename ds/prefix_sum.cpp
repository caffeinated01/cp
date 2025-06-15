#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> p_sum(N);

  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  p_sum[0] = A[0];

  for (int i = 1; i < N; i++)
  {
    p_sum[i] = A[i] + p_sum[i - 1];
  }

  for (int i = 0; i < N; i++)
  {
    cout << p_sum[i] << " ";
  }
}