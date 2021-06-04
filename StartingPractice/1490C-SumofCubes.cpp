#include <iostream>
#include <cmath>
#define ll long long 

using namespace std;

int bsearch(ll l, ll r, ll sv, ll x){
	while(l<=r){
		ll mid = (l+r)/2;
		if(pow(mid,3) + pow(sv,3) == x)
			return 1;
		if(x-pow(sv,3)>=pow(mid,3)){
			l=mid+1;
		}
		if (x-pow(sv,3)<pow(mid,3))
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
		//cout<<x<<" ";
		ll sv = cbrt(x);
		ll half = (sv+1)/2;
		ll ans = -1;
		while(sv>=half){
			ans=bsearch(1, sv, sv, x);{
				if(ans==1){
					cout<<"Yes"<<endl;
					break;
				}
			}
			sv--;
		}
		if(ans == 1)
			continue;
		else
			cout<<"No"<<endl;
	}
	return 0;
}