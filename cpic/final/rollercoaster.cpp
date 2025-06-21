#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, K;
  cin >> N >> K;

  vector<int> v;

  for (int i = 0; i < N; i++)
  {
    int A;
    cin >> A;
    v.push_back(A);
  }

  multiset<int> m;

  int prev = v[0];
  for (int i = 0; i < K; i++)
  {
    m.insert(v[i]);
  }

  cout << *(--m.end()) - *(m.begin()) << " ";

  for (int i = K; i < N; i++)
  {
    prev = v[i - K];
    m.erase(m.find(prev));
    m.insert(v[i]);

    cout << *(--m.end()) - *(m.begin()) << " ";
  }
}
