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

  int n;
  cin >> n;

  vector<pair<int, int>> v(n);

  for (int i = 0; i < n; i++)
  { // price
    cin >> v[i].first;
  }

  for (int i = 0; i < n; i++)
  { // increment
    cin >> v[i].second;
  }

  sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b)
       { return a.second > b.second; });

  int ans = 0;

  for (int i = 0; i < n; i++)
  {
    int curr = v[i].first + (i * v[i].second);
    ans += curr;
  }

  cout << ans;

  return 0;
}