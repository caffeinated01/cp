#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, D;
  cin >> N >> D;

  priority_queue<int> p;

  for (int i = 0; i < N; i++)
  {
    int w;
    cin >> w;
    p.push(w);
  }

  int ans = 0;

  for (int i = 0; i < D; i++)
  {
    ans += p.top();
    p.pop();
  }

  cout << ans;

  return 0;
}