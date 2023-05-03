#include <stdio.h>
#include <stdlib.h>
#define SIZE 255
#define SIZEC 11
#define SIZEL 32
int main()
{
    char tableauAnsi[SIZEL][SIZEC];
    int i, x, y;

    printf ("TABLEAU ANSI ETENDU :\n");

    while (i<=SIZE)
    {
        for (x=0; x<=SIZEL; x++)
            for (y=0; y<=SIZEC; y++)
                tableauAnsi[x][y]=i;
        i++;
    }
    i=11;
    while(i<=SIZE)
    {
        for (x=0; x<=SIZEL; x++)

        {for (y=0; y<SIZEC; y++)
             printf(" %d:%c ",i ,tableauAnsi[x][y]);
        }
        printf("\n");
        i++;
    }







    return 0;
}
