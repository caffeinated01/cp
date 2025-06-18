#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  priority_queue<int> p;

  for (int i = 0; i < N; i++)
  {
    int c;
    cin >> c;
    p.push(c);
  }

  int ctr = 0;
  int ans = 0;

  for (int i = 0; i < N; i++)
  {
    ctr++;
    if (ctr == 4)
    {
      p.pop();
      ctr = 0;
      continue;
    }

    ans += p.top();
    p.pop();
  }

  cout << ans;

  return 0;
}