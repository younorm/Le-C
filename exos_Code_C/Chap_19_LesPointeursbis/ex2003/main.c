#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *tablo,i;
    tablo = (int *)malloc(sizeof(int)*3);
    if(tablo == NULL)
    {
        puts("Unable to allocate memory");
        exit(1);
    }
    *(tablo) = 100;
    *(tablo + 1) = 200;
    *(tablo + 2) = 300;
    for (i=0; i<3; i++)
        printf("%d\n",*(tablo+i));
    return 0;
}
