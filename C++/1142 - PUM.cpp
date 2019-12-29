#include <iostream>

using namespace std;

int main()
{
	int n = 0, j = 0, k = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		j = 0;
		while(j != 3)
		{
			k++;
			cout<<k<< " ";
			j++;
		}
		k++;
		cout<<"PUM"<<endl;
	}
	return 0;
}