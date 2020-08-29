#include "bits/stdc++.h"
using namespace std;
main()
{
	string s;
	int t;
	cin >> t;
	while(t--)
	{
		cin >> s;
		int kt=0;
		for(int i=0;i<s.length();i++)
		if(s[i]==s[i+1]) kt=1;
		if(kt==0)
		cout << "YES" << endl;
		else
		cout << "NO" << endl;
	}
	
}
