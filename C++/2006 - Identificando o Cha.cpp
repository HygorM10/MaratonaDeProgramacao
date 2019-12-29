#include <iostream>

using namespace std;

int main()
{
	int aux = 0, t = 0, cont = 0;
	
	cin>>t;
	
	for(int i = 0; i < 5; i++)
	{
		cin>>aux;
		if(aux == t)
		{
			cont++;
		}
	}
	
	cout<<cont<<endl;
	return 0;
}