#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll x = n/3;
		if(n%3 == 0) cout << x << " " << x << endl;
		else if(n%3 == 1) cout << x+1 << " " << x << endl;
		else cout << x << " " << x+1 << endl;
	}
	return 0;
}