#include"bits/stdc++.h"
using namespace std;
int w[1000],v[1000],maxx=0,xopt[10000],n,m,b[100000],ok=0;

void init()
{
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	cin >> w[i] >> v[i];
}

void kiemtra()
{
	int sum=0,tong=0,k=0;
	for(int i=1;i<=n;i++)
	sum+=w[i]*b[i];
	if(sum <= m)
	{
		for(int i=1;i<=n;i++)
		{
			tong+=v[i]*b[i];
		}
		if(tong > maxx) 
		{
			maxx = tong;
			for(int i=1;i<=n;i++)
			{
				if( b[i]==1 )
				{
					k++;
					xopt[k] = i;
					ok=k;
				}
			}
		}
	}
	
}

void Try(int i)
{
	for(int j=0;j<=1;j++)
	{
		b[i]=j;
		if(i==n) kiemtra();
		else Try(i+1);
	}	
}

void solve()
{
	init();
	Try(1);
}

main()
{
	
	solve();
	cout << maxx << endl;
	for(int i=1;i<=ok;i++)
	cout << xopt[i] << " "; 
}
