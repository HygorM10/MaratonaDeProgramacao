#include<iostream>

using namespace std;

int main()
{

	int a=0,b=0;
	
	cin>>a>>b;
	
	if(a == b)
	{
		cout<<a;
	}else
	{
		if(a > b)
		{
			cout<<a;
		}else
		{
			cout<<b;
		}
	}
	
	cout<<endl;

	return 0;
}