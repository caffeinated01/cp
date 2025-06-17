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

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  stack<char> s;

  int L; cin >> L;
  bool flag = false;

  map<char, char> m;
  m['('] = ')';
  m['['] = ']';
  m['{'] = '}';

  for (int i=0; i<L; i++){
    char c; cin >> c;
    
    if (c == '(' || c == '[' || c == '{'){
      s.push(c);
    } 

    else if(!s.empty() && c == ')' && s.top() == '('){
        s.pop();
    } 
    else if (!s.empty() && c == ']' && s.top() == '['){
        s.pop();
    } 
    else if (!s.empty() && c == '}' && s.top() == '{'){
        s.pop();
    }
    else{
        flag = true;
    }
    
}

  if (s.empty() && !flag){
    cout << "Valid";
  } else{
    cout << "Invalid";
  }
}