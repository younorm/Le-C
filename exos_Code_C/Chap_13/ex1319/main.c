#include <stdio.h>
char getch(void);
int main()
{
    int first,second;

    printf("Type your first initial: ");
    first = getch();
    printf("Type your second initial: ");
    second = getch();
    printf("Your initials are '%c' and '%c'\n", first,second);
    return(0);
}

char getch(void)
{
    char ch;

    ch = getchar();
    while(getchar()!='\n');
    return(ch);
}
