#include<stdio.h>
#define N 30
int Fun(char str[])
{
    int i,con=0;
    for(i=0;str[i+1]!='\0';i++)
    {
        if(str[i]+1==str[i+1])
        {

        }
        else
            con++;
    }
    con=con+1;
    return con;
}
int main()
{
    char s[N+5];
    gets(s);
    printf("%d\n",Fun(s));
    return 0;
}
