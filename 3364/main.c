#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int comp(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int n,a[1005],i,con=0;
    freopen("nn.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),comp);
    for(i=0;i<n;i++)
    {
        if(a[i]==33||a[i]==34)
        {
            con++;
        }
    }
    printf("%d\n",con);
    return 0;
}
