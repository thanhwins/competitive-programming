#include"bits/stdc++.h"
using namespace std;
main()
{
	string s;
	getline(cin , s);
	int b[1000]={0};
	int dem=0;
	int l=s.length();
	for(int i=0;i<l;i++)
	b[s[i]]++;
	for(int i=0;i<1000;i++)
	if(b[i]>0) dem++;
	cout << dem;
}
