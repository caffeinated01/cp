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
  int N, K;
  cin >> N >> K;
  int curr = 0;
  int ans = 0;
  
  priority_queue<int> pq;

  for (int i = 0; i < N; i++)
  {
    int T;
    cin >> T;

    if (T >= 0)
    {
      curr += T;
    }
    else {
      pq.push(T);
      if (pq.size() >= K)
      {
        curr += pq.top();
        pq.pop();
      }
    }
    ans = max(curr, ans);
  }
  cout << ans;
}