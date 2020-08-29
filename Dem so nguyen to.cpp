#include"bits/stdc++.h"
using namespace std;
int nt(int n)
{
	if(n<2) return 0;
	else
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return 1;
}
main()
{
	int l,r,dem=0;
//	cin >> l >> r;
	for(int i=1;i<=2000000000;i++)
	{
		if(nt(i)) 
		{
			dem++;
			cout << i << endl;
		}
	}
	cout << dem;
}
