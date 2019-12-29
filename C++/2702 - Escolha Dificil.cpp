#include <iostream>

using namespace std;

int main()
{
	int aux,x[3],y[3],soma=0;
	
	for(int i = 0; i < 3; i++)
	{
		cin>>aux;
		
		x[i] = aux;
	}
	
	for(int i = 0; i < 3; i++)
	{
		cin>>aux;
		
		y[i] = aux;
	}
	
	for(int i = 0; i < 3; i++)
	{
		if(x[i] < y[i])
		{
			soma += y[i] - x[i];
		}
	}
	
	cout<<soma<<endl;

	return 0;
}