#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
	int a[10000];
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<n;i++)
    {
        int vt=i;
        for(int j=i+1;j<=n;j++) if(a[j]<a[vt]) vt=j;
        swap(a[i], a[vt]);
        for(int j=1;j<=n;j++) if(j==vt||j==i) cout << "[" << a[j] << "]" <<" ";
        else cout << a[j] << " ";
        cout << endl;
    }

}
