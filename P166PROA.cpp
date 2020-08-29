#include"bits/stdc++.h"
using namespace std;
main()
{
	freopen("data.txt","r",stdin);
	int n,a[100009],b[100009];
	cin >> n;
	for(int i=1;i<=n;i++)
	cin >> a[i];
	for(int i=1;i<=n;i++)
	cin >> b[i];
	long long res=0,tmp1,tmp2;
	for(int i=1;i<=n;i++)
	{
		tmp1=0,tmp2=0;
		for(int j=1;j<=n;j++)
		{
			tmp1=tmp1|a[j];
			tmp2=tmp2|b[j];
			res=max(res,tmp1+tmp2);
		}
		
	}
	cout << res;
}
