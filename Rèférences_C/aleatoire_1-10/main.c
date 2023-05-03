#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create(int *tableau);
void show(int *tableau);
int main()
{
    int tableau[10];
    srand(time(NULL));
    create (tableau);
    show (tableau);

    return 0;
}
void create(int *tableau)
{
    int random_number,i;
    for(i=0; i<=9; i++)
        {
   random_number = rand() % 10;
    tableau[i] = random_number;
}
}
void show(int *tableau)
{
    int i;
    for(i=0; i<=9; i++)
    printf("-%d",tableau[i]);
}

