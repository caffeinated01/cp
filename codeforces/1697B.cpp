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
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, q;
  cin >> n >> q;

  vector<int> p(n), s(n + 1);

  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  sort(p.begin(), p.end());

  for (int i = 0; i < n; i++) {
    s[i + 1] = s[i] + p[i];
  }

  while (q--) {
    int x, y;
    cin >> x >> y;

    int ans = s[n - x + y] - s[n - x];

    cout << ans << "\n";
  }

  return 0;
}
