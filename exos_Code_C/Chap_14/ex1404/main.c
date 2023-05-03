#include <stdio.h>

int main()
{
    struct president
    {
        char name[40];
        int year;
    }
     presfirst = {
        "George Washington",
        1789
    };

    printf("The first president was %s\n",presfirst.name);
    printf("He was inaugurated in %d\n",presfirst.year);

    return(0);
}
