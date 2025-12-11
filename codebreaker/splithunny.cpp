#include <cstdio>
#include <stdio.h>
#include <stdbool.h>
#include <iostream>
#include <map>
#include <vector>
#include <climits>
#include <stack>
#include <string>
#include <queue>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <cctype>
#include <bitset>
#include <iomanip>
#include <cstring>
#include <numeric>
#include <cassert>
#include <chrono>

using namespace std;

#define int long long

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

int r, c;
char h[10000][10000];
bool visited[10000][10000];

int ans = 0;

void dfs(int x, int y)
{
  if (visited[x][y])
    return;
  visited[x][y] = true;
  for (int i = 0; i < 4; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx < 0 || ny < 0 || nx >= r || ny >= c)
      continue;
    if (!visited[nx][ny] && h[nx][ny] == 'H')
    {
      dfs(nx, ny);
    }
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> r >> c;

  for (int i = 0; i < r; ++i)
  {
    for (int j = 0; j < c; ++j)
    {
      cin >> h[i][j];
    }
  }

  for (int i = 0; i < r; ++i)
  {
    for (int j = 0; j < c; ++j)
    {
      if (visited[i][j] || h[i][j] == '.')
        continue;

      dfs(i, j);
      ans += 1;
    }
  }

  cout << "Oh, bother. There are " << ans << " pools of hunny.";
}