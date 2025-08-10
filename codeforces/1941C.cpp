#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;

  while (T--)
  {
    int n;
    string s;
    cin >> n >> s;
    int ctr = 0;

    for (int i = 0; i < n; i++)
    {
      if (i + 5 <= n && s.substr(i, 5) == "mapie")
      {
        ctr++;
        i += 4; // skip next 4 chars
      }
      else if (i + 3 <= n && (s.substr(i, 3) == "map" || s.substr(i, 3) == "pie"))
      {
        ctr++;
        i += 2; // skip next 2 chars
      }
    }

    cout << ctr << "\n";
  }
}
