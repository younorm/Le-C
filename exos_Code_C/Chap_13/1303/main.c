#include <stdio.h>
#include <ctype.h>

int main()
{
    char phrase[] = "La liberte consiste a pouvoir faire tout ce qui ne nuit pas a autrui : ainsi, l'exercice des droits naturels de chaque homme n'a de bornes que celles qui assurent aux autres membres de la societe la jouissance de ces memes droits. Ces bornes ne peuvent etre determinees que par la loi.";

    int index,alpha,space,punct,maj,min,all;

    alpha = space = punct = maj = min = all = 0;

	/* gather data */
    index = 0;
    while(phrase[index])
    {
        if(isalpha(phrase[index]))
            alpha++;
        if(isspace(phrase[index]))
            space++;
        if(ispunct(phrase[index]))
            punct++;
        if(islower(phrase[index]))
            min++;
        if(isupper(phrase[index]))
            maj++;
        if(isprint(phrase[index]))
            all++;
                    index++;
    }

	/* print results */
    printf("\"%s\"\n",phrase);
    puts("Statistics:");
    printf("%05d Characteres alphabetique \n",alpha);
    printf("%05d Espaces \n",space);
    printf("%05d Ponctuations \n",punct);
    printf("%05d Majuscules \n",maj);
    printf("%05d Minuscules \n",min);
    printf("%05d Totalite des characteres: \n",all);

    return(0);
}
