#include"bits/stdc++.h"
using namespace std;
main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if(c<59)
	printf("%d %d %d",a,b,c+1);
	else
	if(c==59&&b<59)
	printf("%d %d 0",a,b+1);
	else
	if(c==59&&b==59&&a!=23)
	printf("%d 0 0",a+1);
	else
	if(a==23&&b==59&&c==59)
	printf("0 0 0");
}
