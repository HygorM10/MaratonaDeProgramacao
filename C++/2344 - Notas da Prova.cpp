#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	
	cin>>x;
	
	if(x == 0)
	{
		cout<<"E";
	}else if(x >= 1 && x <= 35){
		cout<<"D";
	}else if(x >= 36 && x <= 60){
		cout<<"C";
	}else if(x >= 61 && x <= 85){
		cout<<"B";
	}else if(x >= 86 && x <= 100){
		cout<<"A";
	}
	
	cout<<endl;

	return 0;
}
