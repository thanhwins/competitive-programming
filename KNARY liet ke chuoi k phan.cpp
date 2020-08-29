#include"bits/stdc++.h"
using namespace std;
int a[1000],n,k;
void init()
{
	cin >> k >> n;	
	cout << pow(k,n) << endl;
}
void result()
{
	
	for(int i=1;i<=n;i++)
	cout << a[i];
	cout << endl;
}
void Try(int i)
{
	for(int j=1;j<=k;j++)
	{
		a[i]=j;
		if(i==n) result();
		else Try(i+1);
	}
}
main()
{
	init();
	Try(1);
}
