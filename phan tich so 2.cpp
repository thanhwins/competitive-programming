#include"bits/stdc++.h"
using namespace std;
int nt(int n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return 0;
	}
	return 1;
}
main()
{
	int n,a[10009],k=0,i=1;
	cin >> n;
	while(i<=sqrt(n))
	{
			if(n%i==0&&nt(i))
		{
			k++;
			a[k]=i;
			n=n/i;
		}
			else i++;
	}

	for(int i=1;i<k;i++)
	cout << a[i] << "*";
	cout << a[k];
}
