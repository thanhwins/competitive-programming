#include"bits/stdc++.h"
using namespace std;
main()
{
	int n,m;
	cin >> n >> m;
	float a=(4*n-m)/2;
	float b=n-a;
	if(a<0||b<0||(4*n-m)%2!=0) cout << "-1";
	else
	cout << a << " " << b;
}
