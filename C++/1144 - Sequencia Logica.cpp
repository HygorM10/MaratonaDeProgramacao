#include <iostream>

using namespace std;

int main()
{
	int n, i, a = 0;
	cin>>n;
	for(i = 1; i <= n; i++)
	{
		cout<<i<<" ";
		a = i * i;
		cout<<a<<" ";
		a = 0;
		a = i * i * i;
		cout<<a;
		a = 0;
		cout<<endl<<i<<" ";
		a = i * i + 1;
		cout<<a<<" ";
		a = 0;
		a = i * i * i + 1;
		cout<<a<<endl;
		a = 0;
	}

	return 0;
}
