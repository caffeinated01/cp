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
  cin >> N;

  multiset<int> s;

  for (int i = 0; i < N; i++)
  {
    int op;
    cin >> op;

    if (op == 1)
    {
      int x;
      cin >> x;
      s.insert(x);
    }
    else if (op == 2)
    {
      int x;
      cin >> x;
      if (s.find(x) != s.end())
      {
        s.erase(s.find(x));
      }
    }
    else if (op == 3)
    {
      int x;
      cin >> x;
      if (s.lower_bound(x) != s.end())
      {
        cout << *s.lower_bound(x) << "\n";
      }
      else
      {
        cout << -1 << "\n";
      }
    }
  }

  return 0;
}
