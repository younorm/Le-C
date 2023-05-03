#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tabFinBourse[]={14450.06, 14458.62, 14539.14, 14514.11, 14452.06};
    int i;
    puts("Fermeture de bourse");

    for (i=0; i<5; i++)
    {
        printf("jour %d: %.2f\n",i+1,tabFinBourse[i] );
    }
    return 0;
}
