#include <stdio.h>

int main()
{
    int count;


    for(count = 0;printf("%d, ",count);count = count+1)
    {


        if( count > 50)
            break;
    }
    putchar('\n');
    return(0);
}
