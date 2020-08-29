#include"bits/stdc++.h"
using namespace std;
int a[1000000];
main()
{
	int n,k=0;
	cin >> n;
	if(n==0) cout << "0";
	while(n>0)
	{
		k++;
		a[k]=n%2;
		n=n/2;	
	}
	for(int i=k;i>=1;i--)
	cout << a[i];
}
