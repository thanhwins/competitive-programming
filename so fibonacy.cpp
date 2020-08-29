#include"bits/stdc++.h"
using namespace std;
main()
{
	int n;
	cin >> n;
	int f1=1,f2=1,f;
	cout << f1 << " " << f2;
	for(int i=2;i<n;i++)
	{
		f=f1+f2;
		f1=f2;
		f2=f;
		cout <<" "<< f;
	}
}
