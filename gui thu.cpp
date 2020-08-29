#include"bits/stdc++.h"
using namespace std;
main()
{
	string s;
	cin >> s;
	int n;
	cin >> n;
	for(int i=n-1;i>=0;i--)
	cout << s[i];
	for(int i=s.length()-1;i>=n;i--)
	cout << s[i];
}
