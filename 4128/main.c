#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a[30],b,flag=0;
    scanf("%d %d",&n,&b);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==b)
        {
            flag=1;
            printf("%d\n",i);
        }
    }
    if(flag==0)
    {
        printf("Not Found\n");
    }
    return 0;
}
