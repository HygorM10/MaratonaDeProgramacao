#include<iostream>

using namespace std;

int main()
{

	int x = 0, s = 225;
	int v[5];

	for(int i = 1; i <= 5; i++)
	{
		cin >> x;

		if(i == 1)
		{
			s += x * 300;
		}
		else if(i == 2)
		{
			s += x * 1500;
		}
		else if(i == 3)
		{
			s += x * 600;
		}
		else if(i == 4)
		{
			s += x * 1000;
		}
		else if(i == 5)
		{
			s += x * 150;
		}

	}

	cout << s << endl;

	return 0;
}
