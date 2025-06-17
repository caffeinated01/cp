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
  int n,m; cin >> n >> m;

  vector<int> v;

  for (int i=0; i<n; i++){
    int A; cin >> A;
    v.push_back(A);
  }

  for (int j=0; j<m; j++){
    int B; cin >> B;
    v.push_back(B);
  }

  for (int i =0; i<n+m; i++){
    cout << v[i] << " ";
  }
}