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
#include <random>
#include <chrono>
#include <fstream>

using namespace std;

#define int long long

int adj[2000 + 1];
bool visited[2000 + 1];
int depth;
int ans = 0;

void dfs(int x)
{
  if (visited[x])
    return;
  visited[x] = true;
  if (adj[x] == -1)
    return;
  depth++;
  dfs(adj[x]);
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cin >> adj[i];
  }

  for (int i = 1; i <= n; i++)
  {
    memset(visited, 0, sizeof(visited));
    depth = 1;
    dfs(i);
    ans = max(depth, ans);
  }

  cout << ans;

  return 0;
}