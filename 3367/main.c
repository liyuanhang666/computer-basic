#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b=0,h=2;
    int con=0;
    scanf("%f",&a);
    while(b<a)
    {

        b=b+h;
        h=h*0.98;
        con++;
    }
    printf("%d\n",con);
    return 0;
}
