#include <stdio.h>

int main()
{
    const char *sample = "From whence cometh my help?\n";
    while(putchar(*sample++))
        ;
    puts(sample);
    return(0);
}


