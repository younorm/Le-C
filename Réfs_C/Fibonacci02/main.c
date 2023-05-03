#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u1, u2, u3; // pour parcourir la suite
    int n; // grandeur demandee
    int i; // compteur

    do {
        printf("rang de terme demande (au moin 3) ? :");
        scanf("%d", &n);
    }
    while (n<3);

    u2 = u1 = 1 ; // les 2 premiers termes
    i = 2;
    printf("termes avant le rang :");
    while (i++ < n)
    {
        u3 = u1 + u2 ;
        u1 = u2 ;
        u2 = u3 ;
        printf(" %d \, ", u3);
    }
    printf("\n Valeur du terme de rang %d : %d", n, u3);

    return 0;
}
