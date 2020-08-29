#include"bits/stdc++.h"
using namespace std;
main()
{
	int a,b;
	cin >> a >> b;
	for(int i=1;i<=10;i++)
	{
		a=a*2;
		if(a>b)
		{
			cout << i-1;
			break;
		}
	}

}
