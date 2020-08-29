#include"bits/stdc++.h"
using namespace std;
main()
{
	int n;
	cin >> n;
	if(n==0) cout << "1";
	else
	cout << (n*(n+1)/2)+1;
}
