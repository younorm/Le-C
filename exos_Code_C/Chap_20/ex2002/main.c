#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int *temp,i;
	temp=0;


	/* allocate memory */
	temp = (int *)malloc(sizeof(int)*3);
	if(temp == NULL)
	{
		puts("Unable to allocate memory");
		exit(1);
	}
for (i = 0; i < 3 ; i++)
{
    *temp+i = (temp+100);
    printf("%d\n",*temp+i);
}


	return(0);
}
