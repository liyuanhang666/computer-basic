#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,j,k,i,o;
    FILE *fp;
    fp=fopen("a.dic","r");
    fscanf(fp,"%d",&n);
    for(i=0;i<n;i++)
    {
    fscanf(fp,"%d%d",&a,&b);

    printf("%d %d\n",(a+b)/2,(a-b)/2);
    }
    fclose(fp);
    return 0;
}
