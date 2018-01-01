#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,a,b,c;
    scanf("%d %d %d",&a,&m,&n);
    c=(2*n-m+a)/3;
    b=(4*m-5*n-7*a)/6;
    if(a*3+b*4+c*5==m&&a+2*b+c*4==n)
    {
        printf("%d %d\n",b,c);
    }
    else
    {
        printf("No Answer\n");
    }
    return 0;
}
