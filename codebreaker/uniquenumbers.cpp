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

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  set<string> s;

  for (int i = 0; i < N; i++)
  {
    string n;
    cin >> n;
    s.insert(n);
  }

  cout << s.size();
  
  return 0;
}