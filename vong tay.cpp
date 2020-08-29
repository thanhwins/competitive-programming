#include"bits/stdc++.h"
using namespace std;
main()
{
	int n,k=0;
	cin >> n;
	if(n<=7)
	cout << 7-n <<  " " << n;
	else
	{
		while(n>=7)
		{
			n=n-7;
			k++;
		}
		if(k%2==0)
		cout << 7-n << " " << n;
		else
		cout << n << " " << 7-n;
	}
}
