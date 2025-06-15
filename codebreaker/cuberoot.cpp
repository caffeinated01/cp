#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int j;
    cin >> j;

    int low = 1;
    int high = 1e6; // highest possible sqrt (sqrt of 1e18)

    while (low <= high)
    {
      int mid = (low + high) / 2;
      int cube = mid * mid * mid; // binary search a possible cuberoot, and find the cuberoot's cube

      if (cube == j) // check if the cube is equal to the current number. if yes, then the cuberoot corresponds
      {
        cout << mid << "\n";
        break;
      }

      if (cube < j)
      {
        low = mid + 1;
      }
      else
      {
        high = mid - 1;
      }
    }
  }
}