#include"bits/stdc++.h"
using namespace std;
main()
{
	int  n,d=0,b[100000]={0},a[1000];
	cin >> n;
	if(n==8)
	{
		cout << 4 ;
		return 0;
	}
	for(int i=2;i<=sqrt(n);)
	{
		if(n%i==0)
		{
			d++;
			a[d]=i;
			n=n/i;
		}
		else
		i++;
	}
	a[d+1]=n;
	int res=a[1];
	for(int i=2;i<=d+1;i++)
	{
		if(a[i]!=a[i-1])
		res=res*a[i];
	}
	cout << res;
}
