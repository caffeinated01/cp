#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m, k;
  cin >> n >> m >> k;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<vector<int>> ops(m);
  for (int i = 0; i < m; i++)
  {
    int l, r, d;
    cin >> l >> r >> d;
    ops[i] = {l, r, d};
  }

  vector<int> op_count(m + 2, 0);
  for (int i = 0; i < k; ++i)
  {
    int x, y;
    cin >> x >> y;
    op_count[x] += 1;
    op_count[y + 1] -= 1;
  }

  for (int i = 1; i <= m; ++i)
    op_count[i] += op_count[i - 1];

  vector<int> a_diff(n + 2, 0);
  for (int i = 0; i < m; i++)
  {
    int l = ops[i][0];
    int r = ops[i][1];
    int d = ops[i][2];
    int times = op_count[i + 1];

    a_diff[l - 1] += d * times;
    a_diff[r] -= d * times;
  }

  a[0] += a_diff[0];
  cout << a[0] << " ";
  for (int i = 1; i < n; ++i)
  {
    a_diff[i] += a_diff[i - 1];
    a[i] += a_diff[i];
    cout << a[i] << " ";
  }
}
