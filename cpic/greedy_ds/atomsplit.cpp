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

  int N, T;
  cin >> N >> T;

  priority_queue<int> v;

  for (int i = 0; i < N; i++)
  {
    int S;
    cin >> S;
    v.push(S);
  }

  int ans = 0;

  // cout << "-------";
  for (int i = 0; i < T; i++)
  {
    if (v.empty())
    {
      break;
    }

    // cout << v.back() << "\n";
    if (v.top() == 1)
    {
      ans += v.top();
      v.pop();
      continue;
    }

    int curr = v.top();
    ans += curr;

    v.pop();

    if (curr % 2 == 0)
    {
      v.push(curr / 2);
      v.push(curr / 2);
    }
  }

  cout << ans;

  return 0;
}