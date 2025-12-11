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

vector<int> adj[1000000 + 1];
bool visited[1000000 + 1];

void dfs(int x)
{
  visited[x] = true;
  for (int nxt : adj[x])
  {
    if (!visited[nxt])
      dfs(nxt);
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, e, a, b;
  cin >> n >> e;

  for (int i = 0; i < e; ++i)
  {
    cin >> a >> b;

    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  int ans = 0;

  for (int i = 0; i < n; ++i)
  {
    if (!visited[i])
    {
      ans++;
      dfs(i);
    }
  }
  cout << ans;
}