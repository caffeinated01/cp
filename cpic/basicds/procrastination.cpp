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
  int Q, K;
  cin >> Q >> K;

  int sum = 0;

  deque<pair<int, int>> sw;

  for (int i = 0; i < Q; i++)
  {
    int op;
    cin >> op;

    if (op == 1)
    {
      int T, V;
      cin >> T >> V;

      sw.push_back(make_pair(T, V)); // first is T, second is V
      sum += V;
    }
    else if (op == 2)
    {
      int T_up;
      cin >> T_up;

      while (!sw.empty() && sw.front().first < (T_up - K))
      {
        sum -= sw.front().second;
        sw.pop_front();
      }
      cout << sum << "\n";
    }
  }
}
