#include"bits/stdc++.h"
using namespace std;
main()
{
	int a,b,res=0;
	cin >> a >> b;
	if(a<b) cout << "10";
	else
	{
		res=(a/b)*10;
		a=a%b;
		if(a)
		{
			if(a<=b/2) res=res+5;
			else res=res+10;
		}
		cout << res;
	}
}
