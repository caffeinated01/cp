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

  priority_queue<int> pq;

  int Q;
  cin >> Q;

  for (int i = 0; i < Q; i++)
  {
    int op;
    cin >> op;

    if (op == 1)
    {
      pq.pop();
    }
    else if (op == 2)
    {
      int x;
      cin >> x;
      pq.push(x);
    }
    else if (op == 3)
    {
      cout << pq.size() << "\n";
    }
    else if (op == 4)
    {
      cout << pq.top() << "\n";
    }
  }

  return 0;
}