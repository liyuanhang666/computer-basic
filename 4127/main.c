#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[25],i=0,j,b[13]={0};
    for(i=0;i<25;i++)
    {
        scanf("%d",&a[i]);
    }

    for(j=1;j<=13;j++)
    {
        for(i=0;i<25;i++)
        {
            if(j==a[i])
            {
               b[j]++;
            }
        }
        if(b[j]!=2)
        {
            printf("%d\n",j);
            break;
        }

    }
    return 0;
}
