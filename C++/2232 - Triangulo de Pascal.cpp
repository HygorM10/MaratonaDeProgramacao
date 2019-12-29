#include <iostream>

using namespace std;

int main()
{
	long int n = 0, grau = 0, soma = 0;
	int vet[100][100];

	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> grau;

		if(grau <= 31)
		{
			soma = 0;

			for(int linha = 1; linha <= grau; linha++)
			{
				for(int coluna = 1; coluna <= linha; coluna++)
				{
					if(coluna == 1 || coluna == linha)
					{
						vet[linha][coluna] = 1;
					}
					else
					{
						if (vet[linha][coluna] == 0) vet[linha][coluna] = vet[linha - 1][coluna] + vet[linha - 1][coluna - 1];
					}
					soma += vet[linha][coluna];
				}
			}
			cout << soma << endl;
		}

	}

	return 0;
}
