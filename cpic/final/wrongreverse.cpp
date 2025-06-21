
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    // funny observation: algo somehow pastes the later part into the first part
    // match case: first half match last half!

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int N; cin >> N;
	
	int v[N+1];
	
	for (int i=1; i<N+1; i++){
		cin >> v[i];
	}
	
  // code looks bad because i started doing subtasks sequentially
	if (N == 1){
	    cout << v[1];
	} else if (N == 2){
		if (v[1] != v[2]){
			cout << -1;
			return 0;
		}
		cout << v[1] << " " << v[2];
	} else if (N == 3){
        if (v[1] != v[3]){
			cout << -1;
			return 0;
		}
        cout << v[1] << " " << v[2] << " " << v[3];
    } else {
        for (int i=1; i<=N/2; i++){
            if (v[i] == v[N-i+1]){
                continue;
            }
            cout << -1;
            return 0;
        }


        for (int i=1; i<N+1; i++){
            cout << v[i] << " ";
        }
    }
}
