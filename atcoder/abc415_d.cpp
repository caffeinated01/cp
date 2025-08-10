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

#define int long long

using namespace std;

bool cost(const pair<int, int> &x, const pair<int, int> &y)
{
  int cost_x = x.first - x.second;
  int cost_y = y.first - y.second;
  if (cost_x != cost_y)
  {
    return cost_x < cost_y;
  }
  return x.first < y.first;
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, M;
  cin >> N >> M;

  vector<pair<int, int>> v(M);
  for (int i = 0; i < M; i++)
  {
    cin >> v[i].first >> v[i].second; // A and B
  }

  sort(v.begin(), v.end(), cost);

  int ans = 0;
  int n_bottles = N;

  while (true)
  {
    bool next_opt = false;

    for (auto option : v)
    {
      int A = option.first;
      int B = option.second;
      int cost = A - B;

      if (n_bottles >= A)
      {
        int get = 1 + (n_bottles - A) / cost;

        ans += get;
        n_bottles -= get * cost;

        next_opt = true;
        break;
      }
    }

    if (!next_opt)
    {
      break;
    }
  }

  cout << ans << endl;

  return 0;
}