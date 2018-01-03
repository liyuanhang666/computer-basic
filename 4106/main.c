#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a[1005],b,con=0;
    scanf("%d %d",&n,&b);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=b)
        {
            con++;
        }

    }
    printf("%d\n",con);
    return 0;
}
