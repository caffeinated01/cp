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

int n, t;
vector<int> a;
vector<bool> visited;

bool dfs(int x)
{
  if (x == t)
    return true;
  if (visited[x])
    return false;
  visited[x] = true;
  return dfs(x + a[x]);
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> t;
  a.resize(n + 1);
  visited.assign(n + 1, false);

  for (int i = 1; i <= n - 1; i++)
  {
    cin >> a[i];
  }

  if (dfs(1))
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }

  return 0;
}