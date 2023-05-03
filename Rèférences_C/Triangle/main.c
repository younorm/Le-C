#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreLignes, esp, i, j,  k, l;
    nombreLignes=0;
    printf("combien de lignes ?\n");
    scanf("%d" ,&nombreLignes );
    esp = nombreLignes;
    l=0;
    for (i=0 ; i<=nombreLignes ; i++)
    {
        for(j=esp ; j>=0; j--)
        {
            printf("%c",32);

        }esp--;
for (k=0 ; k<=i*2 ; k++){
    printf("*");
}
printf("\n");
}

    return 0;
}
