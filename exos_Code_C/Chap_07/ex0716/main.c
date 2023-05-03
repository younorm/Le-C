#include <stdio.h>

int main()
{
    char name[20];

    printf("Who are you? ");
    fgets(name,20,stdin);
    printf("Glad to meet you, %s.\n",name);
    return(0);
}