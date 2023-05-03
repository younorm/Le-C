#include <stdio.h>

int main()
{
    char sample[] = "From whence cometh my help?\n";
    char *ps;

    ps = sample;        /* initialize the pointer */

    while(putchar(*ps++));

        puts(sample);
    return(0);
}
