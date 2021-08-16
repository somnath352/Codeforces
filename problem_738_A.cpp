#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);

		for(int i = 0;i<n;i++){
			cin >> v[i];
		}

		int ans = v[0];
		for(auto x : v)
			ans = ans & x;

		cout << ans <<endl;

	}
	return 0;
}