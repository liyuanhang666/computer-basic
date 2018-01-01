#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1005],i=0,n,len=0,sum=0,h=0;
    freopen("nn.txt","r",stdin);
    while(scanf("%d",&a[i])!=EOF)
    {
        i++;
    }
    n=i;

    for(i=0;i<n;i++)
    {
        if(a[i]>=90)
        {
            len++;
            sum=sum+a[i];

        }
        if(len%3==0&&len>0&&sum!=0)
        {
            //printf("%d\n",sum);
            h=h+sum-260;
            sum=0;
            //printf("%d\n",h);
        }
        if(a[i]<60)
        {
            break;
        }
    }
    printf("%d\n",h);
    return 0;
}
