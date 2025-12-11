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
#include <chrono>

using namespace std;

int main()
{
  vector<int> g[1000];
  int V, E, A, B;
  cin >> V >> E;

  for (int i = 0; i < E; i++)
  {
    cin >> A >> B;

    g[A].push_back(B);
    g[B].push_back(A);
  }

  for (int i = 0; i < V; i++)
  {
    for (auto j : g[i])
    {
      cout << j << " ";
    }
    cout << "\n";
  }
}