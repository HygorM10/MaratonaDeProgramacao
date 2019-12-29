#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sstream>

using namespace std;

double resultado(std::string valor)
{
    istringstream iss(valor);
    int X, Y;

    iss >> X >> Y;
    return X + Y;
}

int main()
{
	string n, d, a;
	long long t;

	do
	{
		t = 0;
		a="";
		cin >> d >> n;

		if(d[0] != '0' && n[0] != '0')
		{
			for(int i = 0; i < n.size(); i++)
			{
				if(n[i] != d[0])
				{
					a += n[i];
				}
			}
			
			t = atof(a.c_str());
			if(t > 2147483647 || t < -2147483647)
			{
				cout<<a<<endl;
			}else
			{
				cout<<t<<endl;
			}
			
		}

	}
	while(d[0] != '0' && n[0] != '0');


	return 0;
}
