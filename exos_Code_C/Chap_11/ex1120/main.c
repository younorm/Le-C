#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int r,a,b;
    int nombreAleatoire = 0;
    const int MAX = 49, MIN = 1;
    srand((unsigned)time(NULL));
    for(a=0;a<2;a++)
    {
        for(b=0;b<5;b++)
        {
           nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;
            printf("%d\t",nombreAleatoire);
        }
        putchar('\n');
    }
    return(0);
}
