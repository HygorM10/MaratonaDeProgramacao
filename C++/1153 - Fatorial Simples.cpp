#include <iostream>

using namespace std;

int main()
{
	int n = 0, fat=1;
	
	cin>>n;
	
	for(int i = 1; i < n; i++)
	{
		fat += fat*i;
	}
	
	cout<<fat<<endl;
	return 0;
}