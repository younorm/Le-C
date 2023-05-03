#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int *temp,i,j;
	j=100;

	temp = (int *)malloc(sizeof(int)*3);
	if(temp == NULL)
	{
		puts("Unable to allocate memory");
		exit(1);
	}
    for (i = 0; i < 3 ; i++)
    {
        *(temp+i) = j;
        printf("%d\n", *(temp+i));
        j+=100;
    }
	return(0);

}
