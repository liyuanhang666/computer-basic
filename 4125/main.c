#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int comp(const void *a,const void *b)
{
    return *(int*)b-*(int*)a;
}
int main()
{
    int n,a[1005],sum1=0,sum2=0,i;
        freopen("nn.txt","r",stdin);

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),comp);
    if(n%2==0)
    {
        for(i=0;i<n/2;i++)
        {
            sum1=sum1+a[i];
        }
        for(i=n/2;i<n;i++)
        {
            sum2=sum2+a[i];
        }
        printf("Outgoing:%d\n",n/2);
        printf("Introverted:%d\n",n/2);
        printf("Diff=%d\n",sum1-sum2);

    }
    else
    {
        for(i=0;i<=n/2;i++)
        {
            sum1=sum1+a[i];
        }
        for(i=n/2+1;i<n;i++)
        {
            sum2=sum2+a[i];
        }
        printf("Outgoing:%d\n",n/2+1);
        printf("Introverted:%d\n",n/2);
        printf("Diff=%d\n",sum1-sum2);
    }
    return 0;
}
