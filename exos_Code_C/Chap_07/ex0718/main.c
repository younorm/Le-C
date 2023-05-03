#include <stdio.h>

int main()
{
    char name[20];

    printf("Type your first name: ");
    fgets(name,20,stdin);
    
    printf("Pleased to meet you, %s.\n",name);
    return(0);
}