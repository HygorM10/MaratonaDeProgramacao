#include<iostream>

using namespace std;

int main()
{

	int c = 0, x = 0;

	cin >> c;

	for(int i = 0; i < c; i++)
	{

		cin >> x;

		if(x % 2 == 0)
		{
			cout << 0 << endl;
		}
		else
		{
			cout << 1 << endl;
		}
	}

	return 0;
}
