#include <stdio.h>

int main()
{
    char tictactoe[3][3];
    int x,y;

	/* initialize matrix */
    for(x=0;x<3;x++)
        for(y=0;y<3;y++)
            tictactoe[x][y]='.';
    tictactoe[1][1] = 'X';

	/* display game board */
    puts("Ready to play Tic-Tac-Toe?");
    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
            printf("%c ",tictactoe[x][y]);
        putchar('\n');
    }
    return(0);
}
