#include"bits/stdc++.h"
using namespace std;
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int dem=0,n;
		cin >> n;
		for(int i=2;i<=100000;i++)
		{
			if(i%n==0) dem++;
		}
		cout << dem << endl;
	}
}
