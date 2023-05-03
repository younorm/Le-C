#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j;
    int tableau[10];
    for (i=0; i<=9; i++)
    {
      int random_number;
    srand(time(NULL));
    random_number = rand() % 10;
    printf("%d",random_number);
    }


    return 0;
}
