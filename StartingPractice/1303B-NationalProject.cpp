// #include <iostream>
// #include <cmath>

// #define ll long long

// using namespace std;

// int main()
// {
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		ll n,g,b;
// 		cin >> n>> g>> b;
		
// 		if (n<=g)
// 		{
// 			cout<<n<<endl;
// 			continue; 
// 		}
// 		else{

// 			ll t1 = (n+1)/2;
// 			ll t2= floor(t1/g);
// 			cout<<t2<<"  ";
// 			ll total = t2*g + b*(t2);
// 			cout<<total<<endl;
// 		}

// 	}
// 	return 0;
// }

#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

bool prime(ll x){
	for (ll i = 2; i < x; ++i)
	{
		if(x%i==0){
			return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin >> t;
	int tt=t;
	while(t--){
		ll n, nn=0;
		cin >> n;
		nn = n;
		
		if (n % 2==0)
		{
			nn--;
		}

		ll arr[3] = {0};

		for (ll i = nn; i > 6; i=i-2)
		{	//cout<<i<<"  ";
			
			int count = 0;
			for(int j = i/2; j > 2 ; j--){
				if(i%j==0 && prime(j)==true){
					arr[count] = j;
					++count;
				}
				if (count>2)
				{					
					break;
				}

			}
			if ((arr[0]*arr[1])!=nn)
			{
				continue;
			}
			
			if (count == 2)
			{
				ll y=0;
				int c=0;
				for (ll k = arr[1]+2; k < arr[0]; ++k)
				{					
					if(prime(k)==true){
						++y;
					}
				}
				if(y==0)
					break;
			}
		}
		cout<<arr[0]<<" "<<arr[1];
		cout<<"Case #"<<tt-t<<": "<<arr[0]*arr[1]<<endl;
	}
	
	return 0;
}