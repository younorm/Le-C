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
//impression de la partie haute
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
//fin de la 1ere partie
        while(l<=(nombreLignes*2)+2)//   ligne
        {
            printf("*");            // du
            l++;
        }printf("\n");              //milieu
//impression de la partie basse
for (i=nombreLignes ; i>=0 ; i--)
    {
        for(j=-1 ; j<=esp ; j++)
        {
            printf("%c",32);
        }
        esp++;
            for (k=i*2 ; k>=0 ; k--){
    printf("*");
}
printf("\n");
    }

    return 0;
}
