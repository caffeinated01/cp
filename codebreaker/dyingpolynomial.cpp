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

  int Q;
  cin >> Q;

  for (int i = 0; i < Q; i++)
  {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int l = 0;
    int r = 1e5;

    while (l < (r - 1))
    {
      int mid = (l + r) / 2;
      if ((A * (pow(mid, 3))) + (B * (pow(mid, 2))) + (C * mid) >= D)
      {
        r = mid;
      }
      else
      {
        l = mid;
      }
    }

    cout << r << '\n';
  }

  return 0;
}