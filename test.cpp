#include <cstdio>  
#include <cstring>  
#include <cmath>  
using namespace std;  
int main()  
{  
    int r,h;  
    scanf("%d%d",&r,&h);  
    if(h%r)  
    {  
        if(r-h%r<=r/2)  
        {  
            double r1=(double)r/2;  
            double d=(2-sqrt(3))*r1;  
            double hh=(double)r-double(h%r);  
            if(hh<=d)  
                printf("%d\n",2*(h/r+1)+1);  
            else  
                printf("%d\n",2*(h/r+1));  
        }  
        else  
            printf("%d\n",2*(h/r)+1);  
    }  
    else  
        printf("%d\n",2*(h/r)+1 );  
} 
