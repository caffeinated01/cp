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

  int N;
  int K;
  cin >> N >> K;

  vector<pair<int, int>> v(N);

  for (int i = 0; i < N; i++)
  {
    cin >> v[i].second;
  }

  for (int i = 0; i < N; i++)
  {
    cin >> v[i].first;
  }

  sort(v.begin(), v.end());

  int c = 0;
  int ans = 0;

  while (true)
  {
    if (v[c].second >= K || v[c].second == -1)
    {
      ans += v[c].first * K;
      break;
    }
    else
    {
      ans += v[c].first * v[c].second;
      K -= v[c].second;
    }
    c++;
  }

  cout << ans;

  return 0;
}