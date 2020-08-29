#include"bits/stdc++.h"
using namespace std;
int so(int n)
{
	int sum=0;
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
main()
{
	int n;
	cin >> n;
	if(so(n)%10==9) cout << "YES";
	else cout << "NO";
}
