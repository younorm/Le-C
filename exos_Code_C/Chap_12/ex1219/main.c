#include <stdio.h>
#define size 6
int main()
{

    char caesar[size][9] = {"Julius","Augustus","Nero","Angelus","portos","Nepro"};

    int x;

    for(x=0;x<size;x++)
        puts(caesar[x]);
    return(0);
}
