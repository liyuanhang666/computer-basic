


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[1000],x=0,y=0,z=0,i;
     freopen("nn.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i]-a[i-1]>=10||a[i]-a[i-1]<=-10)
        {
            x++;
            z++;
        }
        else
            z=0;
        if(z==2)
        {
          y++;
        }
    }
    printf("%d %d\n",x,y);
    return 0;
}
