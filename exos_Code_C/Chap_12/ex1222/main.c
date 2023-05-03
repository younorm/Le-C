#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tictactoe[3][3] = {'.','.','.','.','X','.','.','.','.'};
    int x,y;

    for (x=0; x<3; x++)
    {
         for (y=0; y<3; y++)
         {
             printf("%c",tictactoe[x][y]);
         }printf("\n");

    }

    return 0;
}
