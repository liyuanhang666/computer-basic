#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[55];
    int i,con=0,len=0,ou=1;
    double h,fu=1.0;
    freopen("nn.txt","r",stdin);
    scanf("%s",a);
    if(a[0]==45)
        {
          fu=fu*1.5;
          i=1;
        }
    else
        i=0;

    for(;a[i]!='\0';i++)
    {
       if((a[i]-'2')==0)
       {
           con++;
       }
       len++;
    }
    if(a[i-1]%2==0)
    {
        ou=2;
    }
    printf("%d %f %d %d\n",ou,fu,con,len);
    h=con*1.0/len*ou*fu;
   h=(int)(h*10000+0.5);
    printf("%.2f%%\n",h/100);
    return 0;
}
