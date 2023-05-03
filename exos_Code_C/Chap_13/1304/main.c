#include <stdio.h>
#include <ctype.h>

int main()
{
    char answer;

    printf("Would you like to blow up the moon? ");
    scanf("%c",&answer);
    answer = toupper(answer);
    if(answer=='Y')
        puts("BOOM!");
    else if (answer=='N')
        puts("The moon is safe");
    else
        puts("Your answer is wrong !");
    return(0);
}
