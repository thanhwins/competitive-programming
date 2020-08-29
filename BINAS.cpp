#include"bits/stdc++.h"
using namespace std;
int a[22],n,OK=1;
void init()
{
	for(int i=1;i<=n;i++)
	a[i]=0;
}
void sinh()
{
	int i=n;
	while(i>0&&a[i]!=0)
	{
		a[i]=0;
		i--;
	}
	if(i>0) a[i]=1;
	else OK=0;
}
void inkq()
{
	for(int i=1;i<=n;i++)
	cout << a[i];
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
