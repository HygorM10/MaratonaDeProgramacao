#include <iostream>

using namespace std;

int main()
{
	int x = 97;
	char teste = 'a';

	for(int i = 0; i < 26; i++)
	{
		cout << x++ << " e " <<teste++<<endl;
	}

	return 0;
}
