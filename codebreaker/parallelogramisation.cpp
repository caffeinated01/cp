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
  ios_base::sync_with_stdio(0); // TLEs without fast io
  cin.tie(0);

  int Q; cin >> Q;
  deque<int> q;
  vector<int> v;

  for (int i=0; i < Q; i++){
    int op_type; cin >> op_type;

    if (op_type == 1){
      int a; cin >> a;
      q.push_back(a);
    } else if (op_type == 2){
      q.pop_back();
    } else{
      v.push_back(q.front());
      q.pop_front();
    }
  }
  for (auto i : v){
    cout << i << "\n";
  }
}