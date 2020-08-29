#include"bits/stdc++.h"
using namespace std;
int n,a[100009],b[100009];
int min(int a[],int n)
{
	int min=a[1];
	for(int i=1;i<n;i++)
	if(a[i]<min) min=a[i];
	return min;
	
}
main()
{
	
	cin >> n;
	for(int i=1;i<=n;i++)
	cin >> a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<n;i++)
	b[i]=a[i+1]-a[i];
	cout << min(b,n);
}
