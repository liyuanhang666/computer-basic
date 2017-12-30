#include <stdio.h>
#include <stdlib.h>
typedef struct hero
{
    char name[30];
    int kill[5];
    int sum;
} HERO;
struct hero Fun(HERO str[],int T)
{
    int i,sum,h,k,j;
    HERO champion;
    for(i=0; i<T; i++)
    {
        sum=0;
        for(j=0; j<5; j++)
        {
            sum=sum+str[i].kill[j];
        }
        str[i].sum=sum;
    }
    h=str[0].sum;
    for(i=0;i<T;i++)
    {
        if(str[i].sum>h)
        {
            h=str[i].sum;
            k=i;
        }
    }
    champion=str[k];
    return champion;

}
int main()
{
    int T,i,j;
    HERO h[105],champion;
    freopen("nn.txt","r",stdin);
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%s",h[i].name);
        for(j=0; j<5; j++)
        {
            scanf("%d",&h[i].kill[j]);
        }
    }
    champion=Fun(h,T);
    printf("%s %d\n",champion.name,champion.sum);
    return 0;
}
