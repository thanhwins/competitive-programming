#include"bits/stdc++.h"
using namespace std;
main()
{
	int n;
	cin >> n;
	if(n<10) cout << n;
	else
	{
		int res=n;
		int a=n;
		while(n>=10)
		{
			a=n/10;
			res=res+3*a;
			n=n-a*7;
		}
		cout << res;
	}
	
}
