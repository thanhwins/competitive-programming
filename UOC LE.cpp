#include"bits/stdc++.h"
using namespace std;
#define ll long long
ll cp( ll n)
{
	if(n==0) return 0;
	ll a=(ll) sqrt(n);
	return a;
}
main()
{
	ll l,r,t;
	cin >> t;
	while(t--)
	{
			cin >> l >> r;
		cout << cp(r)-cp(l-1) << endl;
	}

}
