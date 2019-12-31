#include <iostream>

using namespace std;

int main()
{
	int n = 0, aux = 0, g = 0;
	
	cin>>n;
	
	for(int i = 0; i < n; i++)
	{
		cin>>aux;
		if(aux > 1)
		{
			g++;
		}
	}
	
	cout<<g<<endl;
		
	return 0;
}