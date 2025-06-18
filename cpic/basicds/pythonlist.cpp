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
  stack<int> s;

  int Q; cin >> Q;


  for (int i=0; i<Q; i++){
    int o; cin >> o;
    
    if (o == 1){
      int X; cin >> X;

      s.push(X);
    }
    else if (o == 2){
      if (!s.empty()){
        cout << s.top() << "\n";
        s.pop();
      } else {
        cout << "Empty" << "\n";
      }
    }
  }
}