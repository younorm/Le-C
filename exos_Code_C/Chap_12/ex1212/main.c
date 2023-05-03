#include <stdio.h>

int main()
{
    char firstname[10], name[10];

    printf("What is your firstname? ");
    scanf("%10s",&firstname);
    printf("What is your name? ");
    scanf("%10s",&name);
    printf("Pleased to meet you, %s %s \n",firstname, name);
   return 0;
}
