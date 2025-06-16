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

#define int long long

int32_t main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N; cin >> N;

  int res = 0;

  for (int i=0; i < N; i++){
    int A; cin >> A;

    if (A == 8) {
      res += 1;
    }
  }

  cout << res;
}