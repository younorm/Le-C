#include <stdio.h>

int main()
{
    int a;
    int *pa;
    float b;
    float *pb;

    pa = &a;				/* initialize */
    *pa = 56;			/*  assign */
    pb = &b;				/* initialize */
    *pb = 1.6524;			/*  assign */

    printf(" %d - %f\n",a,b);
    return(0);
}
