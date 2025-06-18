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

  int N, m;
  cin >> N >> m;
  int ans = 0;

  priority_queue<int, vector<int>, greater<int>> pq;

  for (int i = 0; i < m; i++)
  {
    int k;
    cin >> k;
    pq.push(k);
  }

  while (!pq.empty())
  {
    if ((N - pq.top()) >= 0)
    {
      N -= pq.top();
      ans += 1;
      pq.pop();
      continue;
    }
    break;
  }

  cout << ans;
}