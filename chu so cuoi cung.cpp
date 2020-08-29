#include"bits/stdc++.h"
using namespace std;
int so(int n)
{
    if(n<10) return n;
    int s=0;
    while(n>0)
	{
        s+=n%10;
        n/=10;
    }
    so(s);
}
main()
{
    string s;
    cin >> s;
    int n=0;
    int l=s.length();
    for(int i=0;i<l;i++)
     n += (s[i]-48);
    cout << so(n);
}
