#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int Fun(char *a)
{
    int flag=0,i;
    for(;*(a+1)!='\0';a++)
    {
        if((*a)+1!=*(a+1))
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        return 0;
    }
    else
        return 1;
}
int main()
{

    return 0;
}
