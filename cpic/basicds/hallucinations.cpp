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

int32_t main(){
  int N; cin >> N;
  deque<int> A;

  for (int i = 0; i<N; i++){
    int a; cin >> a;
    A.push_back(a);
  }

  vector<int> res;

  // prefix sum 1
  vector<int> p_sum(N+1,0);
  
  for(int i = 1; i <= N; i++){
    p_sum[i] = A[i - 1];
    if(i > 1){
      p_sum[i] += p_sum[i - 1];
    }
  }


  int Q; cin >> Q;

  for (int i=0; i<Q; i++){
    int L, R; cin >> L >> R;
    
    res.push_back(p_sum[R]-p_sum[L-1]);
  }

  A.pop_front();

  // prefix sum
  vector<int> p_sum2(N+1,0);
  
  for(int i = 1; i <= N; i++){
    p_sum2[i] = A[i - 1];
    if(i > 1){
      p_sum2[i] += p_sum2[i - 1];
    }
  }

  int T; cin >> T;

  if (T == 0){
    for (int i=0; i<res.size(); i++){
      cout << res[i] << "\n";
    }
    return 0;
  }

  for (int i=0; i<Q; i++){
    int L, R; cin >> L >> R;
    
    res.push_back(p_sum2[R]-p_sum2[L-1]);
  }

  for (int i=0; i<res.size(); i++){
    cout << res[i] << "\n";
  }
}