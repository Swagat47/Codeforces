#include <iostream>
#include <cmath>
#define ll long long

using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	while(tc--){
		ll n,m,x;
		cin >>n>>m>>x;
		ll d = ceil((double)x/n);
		ll r = x%n;
		if(x%n==0)
			r=n;
		ll ans = (r-1)*m + d;
		cout << ans <<endl;
	}
	return 0;
}