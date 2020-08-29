#include"bits/stdc++.h"
using namespace std;
main()
{
	string s;
	cin >> s;
	int l=s.length();
	long long sum=0;
	for(int i=0;i<l;i++)
	sum=sum+s[i]-48;
	cout << sum;
	
}
