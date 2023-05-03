#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main()
{
    FILE *handle;
    int highscore,i;

    handle = fopen("scores.dat","w");
    if(!handle)
    {
        puts("File error!");
        exit(1);
    }
    for(i=0;i<SIZE;i++)
    {
        printf("What is your high score? ");
    scanf("%d",&highscore);
    fwrite(&highscore, sizeof(int),5,handle+i);

    }
    fclose(handle);
    puts("Score saved");
    return(0);
}


