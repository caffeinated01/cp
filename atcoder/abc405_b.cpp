#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, M;
  cin >> N >> M;

  vector<int> A;

  for (int i=0; i < N; i++){
    int a;
    cin >> a;
    A.push_back(a);
  }

  int c = 0;

  while (true){
    set<int> s(A.begin(), A.end());
    
    if ((int)s.size() < M){
      cout << c;
      break;
    }
    
    A.pop_back();
    c++;
  }

}