// #include <iostream>
// #include <cmath>
// #define ll long long

// using namespace std;

// int main(int argc, char const *argv[])
// {
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		ll n,m,x;
// 		cin >>n>>m>>x;
// 		ll d = ceil((double)x/n);
// 		ll r = x%n;
// 		if(x%n==0)
// 			r=n;
// 		ll ans = (r-1)*m + d;
// 		cout << ans <<endl;
// 	}
// 	return 0;
// }
#include <iostream>
#include <cmath>

using namespace std;

class city
{
public:
	int id;
	long int vaccines, population;
	double percentage= 0;
	city(){
		id=0;
		vaccines=0;
		population=0;
	};
	void readData(){
		cin>>id>>vaccines>>population;
	}
	void calculate(){
		percentage = double(vaccines)/population*100;
	}
	void display(){
		cout<<id<<" "<<vaccines<<" "<<population<<" "<<percentage<<endl;
	}
	city operator +(city const &obj){
		city temp;
		temp.vaccines = vaccines + obj.vaccines;
		temp.population = population + obj.population;
		return temp; 
	}
	
};

int main()
{
	city c[6];
	city finalc;
    float xm=0,ym=0;
    for(int i=0;i<6;i++)
    	c[i].readData();
    
    for(int i=0;i<6;i++)
    	c[i].calculate();
    
    for(int i=0;i<6;i++)
        c[i].display();

    for (int i = 0; i < 6; ++i)
    {
    	finalc = finalc + c[i];  
    } 
    finalc.id = 0;
    finalc.calculate();
    finalc.display();   

	return 0;
}