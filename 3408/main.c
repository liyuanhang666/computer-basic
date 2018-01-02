#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int a,b,i,sum=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=a+b;i++)
    {
        if(i%7>=1&&i%7<=5)
        {
            sum=sum+250;
        }
    }
    printf("%d\n",sum);
    return 0;
}*/



int main()
{
    int x,y,c=0;
    scanf("%d%d",&x,&y);
    int i;
    for(i=x;i<x+y;i++)
    {
        if(i%7>=1&&i%7<=5)
        {
            c++;
        }
    }
    printf("%d\n",c*250);

}
