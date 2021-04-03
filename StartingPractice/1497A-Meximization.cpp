#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int inputs;
	cin >> inputs;
	for(int i=0; i<inputs; i++){
		int n;
		cin >> n;
		mex(n);
	}
}

void mex(int n){
	vector<int> v(n);
	for (vector<int>::iterator i = .begin(); i != .end(); ++i){
		cin >> v[i];			
	}

	

}