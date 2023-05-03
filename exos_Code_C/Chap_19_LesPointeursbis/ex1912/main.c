#include <stdio.h>

int main()
{
    char sample[] = "From whence cometh my help?\n";
    char *psample;
    psample = sample;

    while(*(psample) != '\0')
    {
        putchar (*(psample++));

    }
    return(0);
}
