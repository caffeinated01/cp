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

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N; cin >> N;

  stack<int> s;

  for (int i=0; i < N; i++){
    int A; cin >> A;

    if (s.empty()){
      s.push(A);
      continue;
    }

    while (!s.empty() && s.top() <= A){
      s.pop();
    }

    s.push(A);
  }

  while (!s.empty()){
    cout << s.top() << "\n";
    s.pop();
  }
}