#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    struct date
    {
        int month;
        int day;
        int year;
    };
    struct human
    {
        char name[45];
        struct date birthday;
    };
    struct human president;

    strcpy(president.name,"George Washington");
    president.birthday.month = 2;
    president.birthday.day = 22;
    president.birthday.year = 1732;

    printf("%s was born on %d/%d/%d\n",
            president.name,
            president.birthday.month,
            president.birthday.day,
            president.birthday.year);

    return(0);
}
