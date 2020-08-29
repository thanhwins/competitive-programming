#include"bits/stdc++.h"
using namespace std;
main()
{
	char s[1000];
	gets(s);
	char *p=strtok(s,".");
	int dem=0;
	while(p!=NULL)
	{
		dem++;
		p=strtok(NULL,".");
	}
	cout << dem;
}
