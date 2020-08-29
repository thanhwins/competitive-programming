#include"bits/stdc++.h"
using namespace std;
main()
{
	double a,b;
	long long sum=0;
	cin >> a >> b;
	if(a-int(a)==0)
	{
		for(int i=a;i<=b;i++)
		sum =sum+i;
		cout << sum;
	}
	else
	{
		for(int i=a+1;i<=b;i++)
		sum=sum+i;
		cout << sum;
	}
	
}
