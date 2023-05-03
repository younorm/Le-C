#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;
    int i;
    for(i=0; i<1200 ; i++)
    {
        tictoc = time(NULL);
    printf("The time is now %lu\n",tictoc);

    }
          return(0);
}

