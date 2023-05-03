#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create(int *tableau);
void show(int *tableau);
int main()
{
    int tableau[10];
    create (tableau);
    show (*tableau);
a
    return 0;
}
void create(int *tableau)
{
    int i=0;
    int random_number;
    while (i<=9 )
        {
    srand(time(NULL));
    random_number = rand() % 10;
    *(tableau+i) = random_number;
    i++;
}
}
void show(int *tableau)
{
    int i;
    for(i=0; i<=9; i++)
    printf("%d",tableau[i]);
}
