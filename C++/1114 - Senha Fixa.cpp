#include <iostream>

using namespace std;

int main()
{
	int senha = 0;

	cin >> senha;

	if(senha != 2002)
	{
		cout << "Senha Invalida" << endl;
		while(senha != 2002)
		{
			cin >> senha;
			if(senha != 2002)
			{
				cout << "Senha Invalida" << endl;
			}
		}
	}
	cout << "Acesso Permitido" << endl;

	return 0;
}
