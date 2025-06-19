#include <bits/stdc++.h>

using namespace std;

#define int long long

bool valid(int mid)
{
  // check shit here
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int  l = 1, r = 1e10; // l is min possible val, r is max possible value

  // TEMPLATE
  while (l < (r - 1))
  {
    int mid = (l + r) / 2;
    if (valid(mid))
    {
      r = mid;
    }
    else
    {
      l = mid;
    }
  }

  /*
    l & r are adjacent
    l is the boundary of valid(x) == false region
    r is the boundary of valid(x) == true region

    e.g., valid(x) checks for numbers > 5
    [1,2,3,4,5,6,7,8,9,10]
             l r
  */
}