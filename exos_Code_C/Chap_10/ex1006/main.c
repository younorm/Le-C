#include <stdio.h>

void graph(int count,char char1);

int main()
{
    int value;
    char char1='=';
    value = 2;

    while(value<=64)
    {
        graph(value, char1);
        printf("Value is %d\n",value);
        value = value * 2;
    }
    return(0);
}

void graph(int count1,char char1)
{
    int x;

    for(x=0;x<count1;x=x+1)
        putchar(char1);

    putchar('\n');
}
