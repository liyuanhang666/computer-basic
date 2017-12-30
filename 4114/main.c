#include <stdio.h>
#include <stdlib.h>
void Fun(int n,double *s)
{
    double sum=0,h;
    int i;
    for(i=0; i<n; i++)
    {
        if(i%5==0||i%9==0)
        {
            h=1.0/i;
            sum=sum+h;
        }
    }
    *s=sum;

}
int main()
{
    int n;
    double s;
    scanf("%d",&n);
    Fun(n,&s);
    printf("%.2f\n",s);

    return 0;
}
