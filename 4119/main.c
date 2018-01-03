#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[105],a[105];
    int c[26]={0},d[26]={0};
    int i,flag=1;
    freopen("nn.txt","r",stdin);
    scanf("%s",a);
    scanf("%s",str);
    for(i=0;a[i]!='\0';i++)
    {
        c[a[i]-'a']++;
    }
    for(i=0;str[i]!='\0';i++)
    {
        d[str[i]-'a']++;

    }
    for(i=1;i<=26;i++)
    {

        if(d[i]>c[i])
        {
            flag=0;
            break;
        }

    }
    if(flag==0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES %d\n",strlen(a)-strlen(str));
    }
    return 0;
}
