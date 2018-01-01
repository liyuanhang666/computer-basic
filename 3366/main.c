#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    scanf("%f",&a);
    if(a<15)
    {
        printf("clod\n");
    }
    else if(a>25)
    {
        printf("hot\n");
    }
    else
    {
        printf("home\n");
    }
    return 0;
}
