#include"bits/stdc++.h"
using namespace std;
main()
{
	int n;
	cin >> n;
	int a[100009];
	for(int i=1;i<=n;i++)
	cin >> a[i];
	int res=0;
	int pri=a[1];
	for(int i=1;i<=n;i++)
	{
		res=max(res,a[i]-pri);
		pri=min(pri,a[i]);
	}
	
	cout << res;
}
