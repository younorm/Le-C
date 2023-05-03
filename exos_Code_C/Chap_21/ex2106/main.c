#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;
    struct tm *today;

    time(&tictoc);
    today = localtime(&tictoc);
    printf("Nous sommes le %d/%d/%d\n",
	        today->tm_mday,
	        today->tm_mon+1,
	        today->tm_year+1900);
    printf("il est %d:%d H\n",
	        today->tm_hour,
	        today->tm_min)
	        ;

    return(0);
}
