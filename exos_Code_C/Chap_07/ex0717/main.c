#include <stdio.h>

int main()
{
    
const char NAME[3];

    printf("Who are you? ");
    fgets(NAME,3,stdin);
    printf("Glad to meet you, %s.\n",NAME);
    return(0);
}