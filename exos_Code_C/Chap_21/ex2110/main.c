#include <stdio.h>
#include <time.h>

int main()
{
    int i;
    time_t tictoc;
    struct tm *today;
    char *mois[12] = {"Janvier", "Fevrier", "Mars", "Avril","Mai","Juin","Juillet","Aout","Septembre","Octobre","Novembre","Decembre"};
    char *jour[10] ={"Dimanche","Lundi","Mardi","Mercredi","Jeudi","Vendredi","Samedi"};
    time(&tictoc);
    today = localtime(&tictoc);

    printf("Nous sommes le %s %d %s %d\n",
	        jour[today->tm_wday],
	        today->tm_wday,
	        mois[today->tm_mon],
	        today->tm_year+1900);
    printf("il est %dh:%dm \n",
	        today->tm_hour,
	        today->tm_min)
	        ;

    return(0);
}
