#include <stdio.h>

int main()
{
    char c = 'c';
    int i = 123;
    float f = 98.6;
    double d = 6.022E23;
    char *pc;
    int *pi;
    float *pf ;
    double *pd;

    pc = &c;
    pi =&i;
    pf = &f;
    pd = &d;

    printf("Address of 'c' %p\n",c);
    printf("Address of 'i' %p\n",i);
    printf("Address of 'f' %p\n",f);
    printf("Address of 'd' %p\n",d);

    printf("Address of 'c' %c\n",*pc);
    printf("Address of 'i' %d\n",*pi);
    printf("Address of 'f' %f\n",*pf);
    printf("Address of 'd' %ld\n",*pd);
    return(0);
}

