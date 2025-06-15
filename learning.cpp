#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int res = 0;

  int n;
  cin >> n;

  vector<int> train(n);
  vector<int> bus(n);

  for (int i = 0; i < n; i++)
  {
    cin >> train[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> bus[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (train[i] > bus[i])
    {
      res += bus[i];
    }
    else
    {
      res += train[i];
    }
  }

  cout << res;
}
