#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[9];
    int n,i,h,b[8];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=(a[i]-'0'+5)%10;
    }
    h=b[0];
    b[0]=b[3];
    b[3]=h;
    h=b[1];
    b[1]=b[2];
    b[2]=h;
    for(i=0;i<8;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    return 0;
}
