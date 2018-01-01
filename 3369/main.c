#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,h,f,shi,fen;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    h=a*60+b;
    f=c*60+d;
    shi=(f-h)/60;
    fen=(f-h)-shi*60;
    printf("%d %d",shi,fen);
    return 0;
}
