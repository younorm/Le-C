#include <stdio.h>

int main()
{
    struct player
    {
        char name[32];
        int highscore;
        float heuresDeJeu;
    };
    struct player xbox;

    printf("Enter the player's name: ");
    scanf("%s",xbox.name);
    printf("Enter their high score: ");
    scanf("%d",&xbox.highscore);
    printf("Enter their time play: ");
    scanf("%f",&xbox.heuresDeJeu);
    printf("Player %s has a high score of %d for %2.2fH of time play\n ",xbox.name,xbox.highscore,xbox.heuresDeJeu);

    return(0);
}
