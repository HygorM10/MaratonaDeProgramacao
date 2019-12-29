#include <iostream>

using namespace std;

int main()
{
	int n = 0, t = 0, v = 0, km=0;
	
	cin>>n;
	
	for(int i = 0; i < n; i++)
	{
		cin>>t>>v;
		km += t*v;
	}
	
	cout<<km<<endl;
	return 0;
}