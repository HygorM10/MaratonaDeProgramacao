#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int aux, maior = 0;

	cin >> aux;

	if(aux != 0)
	{
		maior = aux;
		while(aux != 0)
		{
			cin>>aux;
			if(aux > maior)
			{
				maior = aux;
			}
		}
		cout<<maior<<endl;
	}

	return 0;
}
