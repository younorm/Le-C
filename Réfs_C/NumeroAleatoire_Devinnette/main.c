#include <stdio.h>
#include <stdlib.h>

int main()
{

    int guess, secret;
    const int MAX = 100, MIN = 1;
    srand((unsigned)time(NULL));
    secret=(rand() % (MAX - MIN + 1)) + MIN;

   do
   {
        printf("Can you guess the secret number 1 \- 100: ");
    scanf("%d",&guess);
    if(guess>secret)
    {
        puts("less!");

    }
    else if(guess<secret)
    {
        puts("more");
        }
   }
   while (guess!=secret);

   puts("You won !");

   return 0;

}
