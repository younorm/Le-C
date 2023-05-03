#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create(int *tableau);
void show(int *tableau);
int main()
{
    int tableau[10];
    create (tableau);
    show (tableau);

    return 0;
}
void create(int *tableau)
{
   int i;
    for(i=0; i<=9; i++)
    tableau[i] = i+1;
}
void show(int *tableau)
{
    int i;
    for(i=0; i<=9; i++)
    printf("%d",tableau[i]);
}
