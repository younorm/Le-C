#include <stdio.h>
#include <ctype.h>

int main()
{
    char phrase[] = "La liberte consiste a pouvoir faire tout ce qui ne nuit pas a autrui : ainsi, l'exercice des droits naturels de chaque homme n'a de bornes que celles qui assurent aux autres membres de la societe la jouissance de ces memes droits. Ces bornes ne peuvent etre determinees que par la loi.";

    int index,alpha,space,punct,maj,min;

    alpha = space = punct = maj = min = 0;

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
                    index++;
    }

	/* print results */
    printf("\"%s\"\n",phrase);
    puts("Statistics:");
    printf("%5d characteres alphabetique\n",alpha);
    printf("%5d espaces\n",space);
    printf("%5d ponctuations\n",punct);
    printf("%5d Majuscules\n",maj);
    printf("%5d Minuscules\n",min);

    return(0);
}
