#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;


int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		ll n, l, r;
		cin >>n>>l>>r;
		ll arr[n];
		int start=0, count=0;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			if (count == 0)
			{
				if (arr[i]>l/2)
				{
					start = arr[i];
				}
			}
		}
		sort(arr, arr+n);
	}
	return 0;
}