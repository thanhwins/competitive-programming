#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#define inp fin
#define out fout
#define MAX 100000

using namespace std;
typedef unsigned long long ULL;
long a,b,c;
int dig[10];
bool prime[100000];
bool dx(long x){
int n=0;
while (x!=0){
dig[n]=x%10;
n++;
x/=10;
}
for (int i=0,j=n-1;i<j;i++,j--){
if (dig[i]!=dig[j])
return false;
}
return true;
}
void makePrime(){
memset(prime,1,sizeof(prime));
prime[0]=prime[1]=false;
for (long i=2;i<MAX;i++){
if (prime[i]){
for (int j=i*2;j<MAX;j+=i){
prime[j]=false;
}
}
}
}
int main(){

cin >> a >> b;
c=0;
/* BUILD PRIME ARR */
makePrime();
for (long l=a+1;l<b;l++){
if (dx(l)&&prime[l])c++;
}
cout << c;

return 0;
}
    
