#include"bits/stdc++.h"
using namespace std;
int a[1000],i,k,x,b,n,giaithua=1;
void init()
{
	for( i=1;i<=n;i++)
	a[i]=i;
}
main()
{
	cin >> n;
	for(int i=1;i<=n;i++)
	giaithua=giaithua*i;
	cout << giaithua << endl;
	init();
	do
	{
		for( i = 1 ; i <= n ; i++)
		cout << a[i];
		cout << endl;
		i=n-1;
		while( i>0 && a[i]>a[i+1] ) i--;
		if(i>0)
		{
			k=n;
			while( a[k] < a[i] )  k--;
			swap(a[k],a[i]);
			x=i+1;
			b=n;
			while( x < b )
			{
				swap(a[x],a[b]);
				x++;
				b--;
			}
		}
	}
	while(i!=0);
}
