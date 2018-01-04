#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct
{
    char name[25];
    int a;
    int b;
    int c;
}str;
int comp (str *a,str *b)
{
    return a->c-b->c;
}
int main()
{
    int n,i;
    str stu[105];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%s %d %d %d",stu[i].name,&stu[i].a,&stu[i].b,&stu[i].c);
    }
    qsort(stu,n+1,sizeof(str),comp);
    for(i=0;i<=n;i++)
    {
        printf("%s %d %d %d\n",stu[i].name,stu[i].a,stu[i].b,stu[i].c);
    }
    return 0;
}
