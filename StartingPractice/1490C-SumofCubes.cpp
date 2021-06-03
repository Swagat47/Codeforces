#include <iostream>
#include <camth>
#define ll long long 

using namespace std;

int bsearch(ll l, ll r){
	while(l<=r){
		mid = (l+r)/2;
		if(pow(mid,3) + pow(sv,3) == x)
			return 1;
		if(s>=mid){
			l=mid+1;
		}
		if (s<mid)
		{
			r=mid-1;
		}
	}
	return 0;
}

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		ll x;
		cin >> x;
		ll sum = 0;
		ll sv = cbrt(x);
		ll l = 1;
	}
	return 0;
}