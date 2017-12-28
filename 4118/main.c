#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,j,k,h[105][105],con,g;
    freopen("nn.txt","r",stdin);
    scanf("%d %d",&a,&b);
    for(j=0; j<a; j++)
    {
        for(k=0; k<b; k++)
        {
            scanf("%d",&h[j][k]);
        }
    }
    for(j=0; j<a; j++)
    {
        for(k=0,g=b-1; k<g; k++,g--)
        {
            con=h[j][k];
            h[j][k]=h[j][g];
            h[j][g]=con;
        }
    }
    for(j=0; j<a; j++)
    {
        for(k=0; k<b; k++)
        {   if(k!=0)
            printf(" %d",h[j][k]);
            else
                printf("%d",h[j][k]);
        }
        printf("\n");

    }
     return 0;
}
