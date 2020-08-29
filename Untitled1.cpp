#include"bits/stdc++.h"
using namespace std;
main()
{
	int n,m;
	cin >> n >> m;
	string s;
	while(n>0)
	{
		s+=to_string(n%m);
		n=n/10;
	}
	cout << s;
}
