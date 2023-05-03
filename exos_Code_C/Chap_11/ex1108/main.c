#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int MAX=49;
	int r,a,b,nombreAleatoire;
    nombreAleatoire=0;
    puts("10 Numeros aleatoires");
    for(a=0;a<2;a++)
    {
       for(b=0;b<5;b++)
        {
              srand(time(NULL));
            nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;
             printf("%d\t",nombreAleatoire);
            }

        }
        putchar('\n');
    }
    return(0);
}
