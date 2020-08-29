#include"bits/stdc++.h"
using namespace std;
int n,x[1000],OK=1;
void init()
{
	for(int i=1;i<=n;i++)
	x[i]=i;
}
void inkq()
{
	for(int i=1;i<=n;i++)
	cout << x[i];
}
void sinh()
{
	int j=n-1;
	while(j>0&&x[j]>x[j+1])
	{
		j--;
	}
	if(j>0)
	{
		int k=n;
		while(x[j]>x[k])
		{
			k--;
		}
		swap(x[j],x[k]);
		int r=j+1;
		int s=n;
		while(r<=s)
		{
			swap(r,s);
			r++;
			s--;
		}
	}
	else OK=0;
}
void lietke()
{
	while(OK)
	{
		inkq();
		sinh();
		cout << endl;
	}
}
main()
{
	cin >> n;
	init();
	lietke();
}
