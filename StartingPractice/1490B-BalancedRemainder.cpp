// #include <iostream>

// using namespace std;

// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int n;
// 		cin >> n;
// 		int arr[n];
// 		int c[3]={0};
// 		for (int i = 0; i < n; ++i)
// 		{
// 			cin >> arr[i];
// 			if(arr[i]%3==0)
// 				c[0]++;
// 			else if(arr[i]%3==1)
// 				c[1]++;
// 			else
// 				c[2]++;
// 		}
		
// 	}
// 	return 0;
// }
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	const int N = 10000000;
	int lp[N+1];
	vector<int> pr;

	for (int i=2; i<=N; ++i) {
	    if (lp[i] == 0) {
	        lp[i] = i;
	    	pr.push_back (i);
		}

		for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j){
		    lp[i * pr[j]] = pr[j];
		}
	}

	while(t--){
		ll n;
		cin>>n;
		vector<int>::iterator lower;
		lower = lower_bound(pr.begin(), pr.end(),n);

		if(*lower!=n){
			lower-=2;
		}

		ll count = (lower - pr.begin() + 1);

		for(int i=1;i<=count;i++){	      
		    if(2*pr[i]>n){
		        break;
		    }
		    count--;
		}
		cout<<count<<endl; 
	}
    return 0;
}