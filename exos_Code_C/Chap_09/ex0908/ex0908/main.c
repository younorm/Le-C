#include <stdio.h>

int main()
{
    char alphabet;

    for(alphabet='z';alphabet>='a';alphabet=alphabet-1)
    {
        printf(" %c",alphabet);
    }
    putchar('\n');


    return(0);
}
