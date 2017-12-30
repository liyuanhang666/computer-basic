#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,a[260][260],b[260][260],j,k,con=0;
    double h;
    freopen("nn.txt","r",stdin);
    scanf("%d %d",&n,&m);
    for(j=0;j<n;j++)
    {
        for(k=0;k<m;k++)
        {
            scanf("%d",&a[j][k]);
        }
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<m;k++)
        {
            scanf("%d",&b[j][k]);
            if(a[j][k]==b[j][k])
            {
                con++;
            }
        }
    }
    h=con*1.0/n/m*100;

    printf("%.2f\n",h);
    return 0;
}
