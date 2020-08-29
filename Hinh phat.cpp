#include"bits/stdc++.h"
using namespace std;
main()
{
	int n,a[101],b[2];
	cin >> n;
	for(int i=0;i<n;i++)
	cin >> a[i];
	for(int i=1;i<=2;i++)
	b[i]=0;
	for(int i=0;i<n;i++)
	b[a[i]]++;
	cout << abs(b[1]-b[2]);
}
