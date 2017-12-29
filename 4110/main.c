#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int n,i,flag=0;
    char str[105][6],a[6];
    freopen("nn.txt","r",stdin);
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
        if(strstr(str[i],a)!=NULL)
        {
            printf("%s\n",str[i]);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Can not find\n");
    }
    return 0;
}
