#include <stdio.h>

int main()
{
    float x;

    x=-5;
    while(x<=5)
    {
       printf("%1.1f\n",x);
       x=x+0.5;
    }
    return(0);
}
