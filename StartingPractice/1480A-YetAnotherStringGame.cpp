#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		string s;
		cin >> s;
		int l = s.length();

		for (int j = 0; j < l; ++j)
		{
			if (i%2==0)
			{
				if(s.at(i)!<s.at(i+1))
					s.at(i) = --s.at(i+1);
				else if (s.at(i+1)-s.at(i))
				{
					/* code */
				}
			}
		}
	}
}