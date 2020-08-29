#include"bits/stdc++.h"
using namespace std;
main()
{
	int n,a[100009];
	cin >> n;
	for(int i=1;i<=n;i++)
	cin >> a[i];
	sort(a+1,a+n+1);
	long long dem=1,sum=0;
	for(int i=1;i<=n;i++)
	if(a[i]==a[i+1]) dem++;
	else
	{
		sum=sum+dem*(dem-1)/2;
		dem=1;
	}
	cout << sum;
}
