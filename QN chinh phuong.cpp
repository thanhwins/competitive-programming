#include"bits/stdc++.h"
using namespace std;
int min(int a[],int n)
{
	int min=a[1];
	for(int i=1;i<=n;i++)
	if(a[i] < min) min=a[i];
	return min;
}
main()
{
	int n,a[10000],b[10000],d=0,c[10000];
	cin >> n;
	for(int i=1;i<=n;i++)
	cin >> a[i];
	for(int i=1;i<=n;i++)
	{
		if(sqrt(a[i])-(int)(sqrt(a[i]))==0)
		{
			d++;
			b[d]=a[i];
		}
	}
	for(int i=1;i<=d;i++)
	{
		c[i]=sqrt(b[i]);
	}
	sort(c+1,c+d+1);
		for(int j=0;j<=31623;j++)
		{
			for(int i=1;i<=d;i++)
			if(j>c[i] && j < c[i+1])
			cout << j;
			return 0;
		}
	
	
}
