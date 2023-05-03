#include <stdio.h>

int main()
{
    struct scores
    {
        char name[32];
        int score;
    };
    struct scores player[4];

    int x, a, externe;
    struct scores temp;


    for(x=0;x<4;x++)
    {
        printf("Enter player %d: ",x+1);
        scanf("%s",player[x].name);
        printf("Enter their score: ");
        scanf("%d",&player[x].score);
    }

    for (interne=0; interne<4-1 ;interne++ )
    {
        for (externe=interne+1; externe<4; externe++)
        {
            if(player[interne].score < player[externe].score)
            {
                temp = player[interne];
                player[interne] = player[externe];
                player[externe] = temp;
            }
        }
    }

    puts("Player Info");
    printf("#\tName\tScore\n");

    for(x=0;x<4;x++)
    {
        printf("%d\t%s\t%5d\n",x+1,player[x].name,player[x].score);

    }
    return(0);
}
