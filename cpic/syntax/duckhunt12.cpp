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

#define int long long

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, X, Y;
  cin >> N >> X >> Y;

  if (X == Y) {
    cout << 0 << endl;
    return 0;
  }

  int dirA = 1;
  int dirB = -1;

  // int time = 0;

  for (int time = 1; time <= N*100; ++time) {
    
    // A MOVE
    if ((X == N && dirA == 1) || (X == 1 && dirA == -1)) {
      dirA *= -1;
    } else {
      X += dirA;
    }

    // B MOVE
    for (int i = 0; i < 2; ++i) {
      if ((Y == N && dirB == 1) || (Y == 1 && dirB == -1)) {
        dirB *= -1;
      } else {
        Y += dirB;
      }
    }

    // time++;
    
    if (X == Y) {
      cout << time << '\n';
      return 0;
    }

  }

  cout << -1;

  return 0;
}