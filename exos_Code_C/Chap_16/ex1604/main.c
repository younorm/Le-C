#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct id
{
    char hprenom[20];
    char hnom[20];
} personal;

typedef struct date
{
    int month;
    int day;
    int year;
} calendar;

struct human
{
    personal name;
    calendar birthday;
};

    struct human president;

    strcpy(president.name.hprenom , "George ");
    strcpy(president.name.hnom , "Washington");
    president.birthday.month = 2;
    president.birthday.day = 22;
    president.birthday.year = 1732;

    printf("%s%s was born on %d/%d/%d\n",
            president.name.hprenom,
            president.name.hnom,
            president.birthday.month,
            president.birthday.day,
            president.birthday.year);

    return(0);
}
