// #include <iostream>
// using namespace std;
// #define ll long long

// int main() {
// 	int tc;
//     cin>>tc;
//     while(tc--){
//         ll D,d,P,Q;
//         cin >>D>>d>>P>>Q;
//         ll n = D/d;
//         ll r = D%d;
//         ll sum = (d*n*(2*P + (n-1)*Q))/2 + r*(P+n*Q);
//         cout<<sum<<endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

void show(int arr[], int n){
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int pivot = 0;
    int i=0,j=n-1;
    while(i<j){
        while(arr[i]<pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    show(arr,n);
    return 0;
}