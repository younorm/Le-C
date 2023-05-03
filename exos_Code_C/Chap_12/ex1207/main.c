#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabInit[]={10, 12, 14, 15, 16, 18, 20};
    float tabRcx[7];
    int i;
   for (i=0; i<7; i++)
    {
        tabRcx[i]=sqrt(tabInit[i]);
    }
    for (i=0; i<7; i++)
    {
        printf("la racine carre de %d est %.2f\n",tabInit[i],tabRcx[i]);
    }

    return 0;
}
