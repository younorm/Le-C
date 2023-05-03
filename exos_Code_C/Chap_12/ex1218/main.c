#include <stdio.h>
#define SIZE 3
int main()
{


    char caesar[SIZE][9] = {"Julius", "Augustus", "Nero"};
    int x,index;

    for(x=0;x<SIZE;x++)
    {
        index = 0;
        while(caesar[x][index] != '\0')
        {
            putchar(caesar[x][index]);
            index++;
        }
        putchar('\n');
    }
    return(0);
}
