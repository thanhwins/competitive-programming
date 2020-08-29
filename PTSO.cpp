#include"bits/stdc++.h"
using namespace std;
main()
{
	int n;
	cin >> n;
	for(int i=2;i<=sqrt(n); )
	{
		if(n%i==0)
		{
			cout << i << "*";
			n=n/i;
		}
		else
		i++;
	}
	cout << n;
}
