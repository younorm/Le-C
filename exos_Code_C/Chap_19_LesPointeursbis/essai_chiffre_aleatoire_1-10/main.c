#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int i,x, *tablo;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        *(tablo+i) = rand() % 10 + 1;
    }
    for (i = 0; i < 10; i++)
    {
       printf("%d, ",tablo+i) ;
    }

    return 0;
}
