#include"bits/stdc++.h"
using namespace std;
main()
{
	int n,f[1000],a=0,b=0;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
			cin >> f[i];
			if(f[i]==100) a++;
			else b++;
	}
	if(a>0)
	{
		if(a%2==0) cout << "YES";
		else cout << "NO";
	}
	else
	{
		if(b%2==0) cout << "YES";
		else cout << "NO";
	}
	
}
