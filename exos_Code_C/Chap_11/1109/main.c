#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreAleatoire = 0;
    int r,a,b;
    const int MAX = 49, MIN = 1;
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
