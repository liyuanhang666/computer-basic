#include <stdio.h>
#include <stdlib.h>
int comp (const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int n,a[105],i,sum=0;
    //freopen("nn.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),comp);

    for(i=0;i<=n/2;i++)
    {
        sum=sum+a[i]/2+1;

    }
    printf("%d\n",sum);
    return 0;
}
