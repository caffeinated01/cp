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
  vector<int> res;

  for (int i=0; i<Q; i++){
    int op; cin >> op;
    if (op == 1){
      int X; cin >> X;
      s.push(X);
    } else if (op == 2){
      // take the back(), set it to some var to keep track, loop while back() is the same type of duck, add to counter
      if (!s.empty()){
        int back = s.top();
        int c = 0;
        
        // cout << "===============\n";
        // cout << back << endl;

        while (!s.empty()){
          if (s.top() == back){
            s.pop();
            c++;
            continue;
          }
          break;
        }
  
        res.push_back(c);
      } else{
        res.push_back(0);
      }
    }
  }

  for (int i=0; i<res.size(); i++){
    cout << res[i] << "\n";
  }
}