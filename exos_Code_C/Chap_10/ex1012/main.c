#include <stdio.h>

void limit(int stop);
int limiter(int )
int main()
{
    int s;

    printf("Enter a stopping value (0-100): ");
    scanf("%d",&s);
   if (s!=(s>0 || s<=100))
   {
       return printf("erreur");
   }
    else
    limit(s);
    return(0);
}

void limit(int stop)
{
    int x;

    for(x=0;x<=100;x=x+1)
    {
        printf("%d ",x);
        if(x==stop)
        {
            puts("You won!");
            return;
        }
    }
    puts("I won!");
}
