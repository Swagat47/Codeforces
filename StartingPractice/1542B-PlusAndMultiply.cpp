#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>
#define ll long long
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		int n,a,b;
		string ans="No";
		cin >> n >> a >> b;
		vector<int> v;
		vector<int>::iterator i = v.begin();
		v.push_back(1);
		int x=0;
		while(*(i+x)<=n){
			int t = *(i+x);
			int prod = t*a;
			int sum = t+b;
			v.push_back(prod);
			v.push_back(sum);
			if(*(i+x)==n){
				ans = "Yes";
				break;
			}
			for (auto& j:v)
			{
				cout<<j<<" ";
			}
			x++;
		}
		cout<<ans<<endl;
	}
	return 0;
}