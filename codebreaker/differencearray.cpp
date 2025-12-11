#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <chrono>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdbool.h>
#include <stdio.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define int long long

int32_t main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int n, u;
  cin >> n >> u;

  vector<int> el(n);
  vector<int> diff(n + 2, 0);

  for (int i = 1; i <= n; i++) {
    cin >> el[i];
  }

  for (int i = 0; i < u; i++) {
    int l, r, v;
    cin >> l >> r >> v;

    diff[l] += v;
    diff[r + 1] -= v;
  }

  for (int i = 1; i <= n; i++) {
    diff[i] += diff[i - 1];
    el[i] += diff[i];
    cout << el[i] << " ";
  }
}
