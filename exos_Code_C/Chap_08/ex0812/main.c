#include <stdio.h>

int main()
{
	const int secret = 17;
    int guess;

    printf("Can you guess the secret number: ");
    scanf("%d",&guess);
    if(guess!=secret)
    {
       puts("Wrong!");
    }
    else
    {
        puts("You guessed it!");
        return(0);

    }
}
