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

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, e, a, b;

  cin >> n >> e;

  vector<int> adj[10000 + 1]; // 1 index

  for (int i = 0; i < e; ++i)
  {
    cin >> a >> b;

    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  for (int i = 1; i <= n; ++i)
  {
    for (auto j : adj[i])
    {
      cout << j << " ";
    }
    cout << "\n";
  }

  return 0;
}