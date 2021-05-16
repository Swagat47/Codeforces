#include <iostream>
#include <cmath>

using namespace std;

int search(int arr[], int x, int n){
	int pos =0;
	if(x==0){
		for (int i = 1; i <= n-1; ++i)
		{
			if(arr[i]==0){
				pos = i;
				break;
			}
		}
	}
	else if (x==n-1)
	{
		for (int i = n-2; i >= 0; ++i)
		{
			if(arr[i]==0){
				pos = i;
				break;
			}
		}
	}
	else{
		int pos1 = 0, pos2 = 0;
		for (int i = x+1; i <=n-1; ++i)
		{
			if(arr[i]==0){
				pos2=i;
				break;
			}
		}

		for (int i = x-1; i >= 0; ++i)
		{
			if(arr[i]==0){
				pos1=i;
				break;
			}
		}
		int pos = abs(x-pos1)<abs(x-pos2)? pos1:pos2;
	}
	arr[pos]=-1;
	return pos;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int count;
	int steps = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		if(arr[i]==1)
			++count;
	}
	if(count==0){
		cout << 0<< endl;
		return 0;
	}

	for (int i = 0; i < n; ++i)
	{
		if(arr[i]==1){
			int pos = search(arr,i,n);
			cout<<pos<<" ";
			steps += abs(i-pos);
			cout<<steps<<endl;
		}
	}
	cout<<steps;
	return 0;
}