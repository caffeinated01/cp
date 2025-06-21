#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int N; cin >> N;
	
	vector<pair<int,int>> v;
	
	// shld sort by size, so size is pair.first
	for (int i=0; i<N; i++){
		int p; cin >> p;
		v.push_back(make_pair(0,p));
	}
	
	for (int i=0; i<N; i++){
		int s; cin >> s;
		v[i].first = s;
	}

	sort(v.rbegin(), v.rend()); // sort so fattest parallelogram is at front
	
	int ans = v.front().second;
    int max_s = v.front().first;
	
	while (v.size() != 1){
        if (v.back().first < max_s){
		    ans += v.back().second;
        }
		v.pop_back();
	}
	
	cout << ans;
}

