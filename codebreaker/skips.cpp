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

void solve() {
    int N, D;
    cin >> N >> D;

    vector<int> M(N);
    for (int i = 0; i < N; i++) {
        cin >> M[i];
    }

    int fuel_zero = 0;
    int blocks_zero = 0;
    for (int i = 0; i < N; i+=2) {
      fuel_zero += M[i];

      if (fuel_zero < D) {
          break;
      }
      
      fuel_zero -= D;
      blocks_zero += 2;
    }

    blocks_zero += fuel_zero / D * 2;

    int fuel_one = 0;
    int blocks_one = 1;

    for (int i = 1; i < N; i += 2){
      fuel_one += M[i];

      if (fuel_one < D){
        break;
      }

      fuel_one -= D;
      blocks_one += 2;
    }
    
    blocks_one += fuel_one / D * 2;

    cout << max(blocks_zero, blocks_one);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}