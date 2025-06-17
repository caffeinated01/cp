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

  int N; cin >> N;

  vector<pair<string,string>> v;

  for (int i=0; i<N; i++){
    string X, Y; cin >> X >> Y;
    v.push_back(make_pair(Y, X));
  }

  for (int i=0; i<N; i++){
    cout << v[i].first << " " << v[i].second << "\n";
  }

}