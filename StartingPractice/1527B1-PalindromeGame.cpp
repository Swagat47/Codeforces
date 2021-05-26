// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
// 	int tc;
// 	cin>>tc;
// 	while(tc--){
// 		int n;
// 		cin >> n;
// 		string s;
// 		cin >> s;
// 		int c=0;
		
// 		int l = s.length();
// 		for (int i = 0; i < l; ++i)
// 			if (s[i]=='0')
// 				++c;

// 		if(c%4==0){
// 			cout<<"DRAW"<<endl;
// 			continue;
// 		}
// 		if((c+1)%4==0){
// 			cout<<"ALICE"<<endl;
// 			continue;
// 		}
// 		else
// 			cout<<"BOB"<<endl;
// 	}
// 	return 0;
// }
#include <iostream>
#include <algorithm>
#include <cmath>
#include <set>
#define ll long long

using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		int temp=1;
		int arr[n];
		
		set<int> s;
		for (int i = 0; i < n; ++i){
			cin >> arr[i];
			s.insert(arr[i]);
			//cin>>arr[i]
		}
		
		sort(arr, arr+n);

		if(n==1){
			cout<<1<<endl;
			continue;
		}

		ll min = abs(arr[0]-arr[1]);
		//ll max = 0;
		ll length = n;

		for (int i = 1; i < n-1; ++i)
		{
			if(abs(arr[i]-arr[i+1])<min)
				min = abs(arr[i]-arr[i+1]);
		}

		if ( s.find(min)!=s.end())
		{

			for (int i = n-1; i >=0; --i)
			{
				if(arr[i]==min){
					cout<<i+1<<endl;
					temp=0;
					continue;
				}
			}

		}
		if (temp==0)
		{
			/* code */
			continue;
		}
		//cout<<min<<" ";
		while(min<arr[length-1]){
			length--;
		}
	
		cout<<length<<endl;
	}
	return 0;
}