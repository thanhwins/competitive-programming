#include"bits/stdc++.h"
using namespace std;
int so(int n)
{
	int a=0,m=n;
	while(n>0)
	{
		a=a*10+n%10;
		n=n/10;
	}
	if(a==m) return 1;
	return 0;
}
main()
{
	int n,a,i;
	cin >> n;
	while(n--)
	{
			cin >> a;
			if(so(a)) printf("%d ",a);
	}

	
}
