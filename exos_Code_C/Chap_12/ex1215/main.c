#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int SIZE=40;
    const int MAX=100, MIN=1;
    int bubble[SIZE];
    int inner,outer,temp,x,i,num;
    srand((unsigned)time(NULL));
    for (i=0; i<=SIZE; i++)
    {

        num=(rand() % (MAX - MIN + 1)) + MIN;
        bubble[i]=num;
    }
	/* Display original array */
    puts("Original Array:");
    for(x=0;x<SIZE;x++)
        printf("%d\t",bubble[x]);
    putchar('\n');

	/* Bubble sort */
    for(outer=0;outer<SIZE-1;outer++)
    {
        for(inner=outer+1;inner<SIZE;inner++)
        {
            if(bubble[outer] < bubble[inner])
            {
                temp=bubble[inner];
                bubble[inner] = bubble[outer];
                bubble[outer] = temp;
            }
        }
    }

	/* Display sorted array */
    puts("Sorted Array:");
    for(x=0;x<SIZE;x++)
        printf("%d\t",bubble[x]);
    putchar('\n');

    return(0);
}
