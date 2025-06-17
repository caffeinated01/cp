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
  int Q; cin >> Q;

  stack<int> s;

  vector<int> psum;
  psum.push_back(0);

  vector<int> res;

  for (int i=0; i<Q; i++){
    int t; cin >> t;
    if (t == 1){
      int n; cin >> n;
      s.push(n);
      psum.push_back(psum[psum.size()-1]+n);
    } else if (t == 2){
      s.pop();
      psum.pop_back();
    } else if (t == 3){
      int x; cin >> x;
      res.push_back(psum[x] - psum[0]);
    }
  }

  cout << "\n";
  
  for (auto i: res){
    cout << i << "\n";
  }
  
  return 0;
}
