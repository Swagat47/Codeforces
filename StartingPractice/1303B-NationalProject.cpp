#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		ll n,g,b;
		cin >> n>> g>> b;
		
		if (n<=g)
		{
			cout<<n<<endl;
			continue; 
		}
		else{

			ll t1 = (n+1)/2;
			ll t2= floor(t1/g);
			cout<<t2<<"  ";
			ll total = t2*g + b*(t2);
			cout<<total<<endl;
		}

	}
	return 0;
}