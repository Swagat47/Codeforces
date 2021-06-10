#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		int arr[n];
		int max = 0;
		int min = INT_MAX;
		int min_pos = 0;
		int max_pos = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			if (arr[i]>max)
			{
				max_pos = i;
				max = arr[i];
			}
			if (arr[i]<=min)
			{
				min_pos = i;
				min = arr[i];
			}
		}
		if ( abs(max_pos-min_pos) >= n/2)
		{
			int min1 = (min_pos<max_pos)? min_pos:max_pos;
			int max1 = (min1==min_pos)?max_pos:min_pos;
			int ans = min1+1 + n-max1;
			cout<<ans<<endl;
			continue;
		}
		else{
			if (min_pos>= n/2 && max_pos>=n/2)
			{
				int min1 = (min_pos<max_pos)? min_pos:max_pos;
				cout<<n-min1<<endl;
			}
			else if(min_pos<= n/2 && max_pos<=n/2){
				int max1 = (max_pos>min_pos)?max_pos:min_pos;
				cout<<max1+1<<endl;
			}
			else{
				int min1 = (min_pos<max_pos)? min_pos:max_pos;
				int max1 = (max_pos>min_pos)? max_pos:min_pos;
				int ans = (max1+1 < n-min1)? max1+1:n-min1;
				cout<<ans<<endl;
			}
		}
	}
	return 0;
}