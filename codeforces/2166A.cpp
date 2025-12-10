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

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {

    int N;
    cin >> N;

    string S;
    cin >> S;

    int ans = 0;

    reverse(S.begin(), S.end());

    for (int n = 1; n < N; n++) {
      if (S[n] != S[0]) {
        S[n] = S[0];
        ans++;
      }
    }

    cout << ans << "\n";
  }
}
