#include <stdio.h>

int main()
{

    char *psample = "From whence cometh my help?\n";


    while(*(psample) != '\0')
    {
        putchar (*(psample++));

    }
    return(0);
}
