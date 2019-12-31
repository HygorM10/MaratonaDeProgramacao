#include <iostream>

using namespace std;

int main()
{
	int t =0, n = 0, k = 0;

	cin >> t;

	for(int i = 0; i < t; i++)
	{
		cin>>n>>k;
		
		if(k > n)
		{
			cout<<n<<endl;
		}else
		{
			cout<<((n / k) + (n - (k * (n/k))))<<endl;	
		}
	}
	
	return 0;
}
