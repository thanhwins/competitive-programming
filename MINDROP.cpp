#include"bits/stdc++.h"
using namespace std;
main()
{
	int  n, a[100009],k=0,b[100009];
	cin >> n;
	for(int i=1;i<=n;i++)
	cin >> a[i];
	for(int i=1;i<n;i++)
	{
		int dem=0;
		if(a[i]==a[i+1])
		{
			dem++;
		}
		k++;
		b[k]=dem;
	}
	if(*max_element(b+1,b+k+1)==0) cout << n-1;
	else
	cout << n-*max_element(b+1,b+k+1);
}
