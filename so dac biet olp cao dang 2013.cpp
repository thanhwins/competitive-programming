#include"bits/stdc++.h"
using namespace std;
#define ll long long
int so(ll n)
{
	int a=0;
	while(n>0)
	{
		a=a+n%10;
		n=n/10;
	}
	return a;
}
main()
{
	ll n;
	cin >> n;
	if(n%so(n)==0) cout << "1";
	else cout << "0";
}
