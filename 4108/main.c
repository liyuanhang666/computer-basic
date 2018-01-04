#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
int n,i,con=0;
char a[1005][105];
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%s",a[i]);
}
for(i=0;i<n;i++)
{
    if(strcmp(a[i],a[n])==0)
    {
        con++;
    }
}
printf("%d\n",con);
    return 0;
}
