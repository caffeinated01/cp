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
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, Q;
  cin >> N >> Q;

  vector<int> v(N);
  vector<int> p_sum(N + 1, 0);

  for (int i = 0; i < N; i++)
  {
    cin >> v[i];
  }
  for(int i = 1; i <= N; i++){
      p_sum[i] = v[i - 1];
      if(i > 1){
        p_sum[i] += p_sum[i - 1];
      }
  }

  for (int i=0; i<Q; i++){
    int L; int R; cin >> L >> R;
    cout << p_sum[R] - p_sum[L-1] << '\n'; 
  }
  
  return 0;
}