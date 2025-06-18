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

  deque<int> deq;

  for (int i=0; i<N; i++){
    int A; cin >> A;
    deq.push_back(A);
  }

  for (int j=0; j<N; j++){
    cout << deq.back() << " ";
    deq.pop_back();
  }
}