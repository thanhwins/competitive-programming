#include"bits/stdc++.h"
using namespace std;
int doinhiphan(int n)
{
	int a[1000],d=0,b[1000];
	while(n>0)
	{
		d++;
		a[d]=n%2;
		n=n/2;
	}
	for(int i=d;i>=1;i--)
	{
		if(a[i]==1) b[i]=0;
		else
		b[i]=1;
	}
	//for(int i=d;i>=1;i--)
	//cout << b[i];
	long long x=0,k=0;
	for(int i=d;i>=1;i--)
	{
		if(b[i]==1)
		{
			x=x+pow(2,i-1);
		}
		
	}
	return x;
}

main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(n==0) cout << "1" << endl;
		else
		cout << doinhiphan(n) << endl;
		
	}
}
