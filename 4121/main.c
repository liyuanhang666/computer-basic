#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int main()
{
    char a[105],b[105],c[105],d[105];
    int i,g,h;
    freopen("nn.txt","r",stdin);
    scanf("%s  %s",a,b);
    //getchar();
    scanf("%s  %s",c,d);

    for(i=0; a[i]!='\0'; i++)
    {
        if((isupper(a[i])!=0)&&(isupper(b[i])!=0)&&(a[i]==b[i]))
        {
            g=a[i]-'A';
            break;
        }

    }
    for(i=0; c[i]!='\0'; i++)
    {
       // printf("%d\n",i);
        //h=i;
        if((islower(c[i])!=0)&&(islower(d[i])!=0)&&(c[i]==d[i]))
        {
            h=i;

           // break;
        }
        //printf("%d\n",i);
    }

    printf("%.02d:%.02d\n",g,h);
    return 0;
}
