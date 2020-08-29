#include"bits/stdc++.h"
using namespace std;
int a[1000],n,b[1000],kt=0,dem=0,c[1000];
void init()
{
	cin >> n;
	for(int i=1;i<=n;i++)
	cin >> a[i];
}
void kiemtra()
{
	
	int sum=0,tong=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+a[i];
	}
	for(int i=1;i<=n;i++)
	{
		tong=tong+b[i]*a[i];
	}
	if(tong==sum/2.0) dem++;
}
void in()
{
	int tong=0,sum=0;
	for(int i=1;i<=n;i++)
	{
		tong=tong+a[i];
	}
	for(int i=1;i<=n;i++)
	sum=sum+c[i]*a[i];
	if(sum==tong/2.0)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[c[i]]==0) 
			cout << "A ";
			else
			cout << "B ";
		}
		cout << endl;
	}
}
void Try1(int i)
{
	for(int j=0;j<=1;j++)
	{
		b[i]=j;
		if(i==n)
		{
			kiemtra();
		}
		
		else Try1(i+1);
	}
}
void Try2(int i)
{
		for(int j=0;j<=1;j++)
	{
		c[i]=j;
		if(i==n)
		{
			in();
		}
		
		else Try2(i+1);
	}
}
void solve()
{
	Try1(1);
	if(dem!=0){
		cout << dem << endl;
		Try2(1);
	}
	else cout << "khong chia duoc";
	
}

main()
{
	init();
	solve();
}
