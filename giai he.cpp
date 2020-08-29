#include"bits/stdc++.h"
using namespace std;
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long a,b,c,d,e,f;
		cin >> a >> b  >> c >> d >> e >> f;
		if(a*e-b*d==0)
		{
			if(c*e-b*f==0||a*f-c*d==0) cout << "INFINITE" << endl;
			if(c*e-b*f!=0&&a*f-c*d!=0) cout << "NO SOLUTION" << endl;
		}
		else
		cout << (c*e-b*f)/(a*e-b*d) << " " << (a*f-c*d)/(a*e-b*d) << endl;
	}
}
