#include"bits/stdc++.h"
using namespace std;
int kt(int a)
{
	int sum=1;
	for(int i=2;i<=sqrt(a);i++)
	if(a%i==0)
	{
		sum+=i;
		if(i*i<a)
		sum +=a/i;
	}
	return sum;
}
main()
{
	int a,b;
	cin >> a >> b;
	//cout << kt(a) << " " << kt(b);
	if(kt(a)==b&&kt(b)==a) cout << "YES";
	else cout << "NO";
}
