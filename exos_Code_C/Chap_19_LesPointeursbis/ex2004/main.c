#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *input1, *input2;
    int size;
	input1 = (char *)malloc(sizeof(char)*1024);
	input2 = (char *)malloc(sizeof(char)*1024);
	if(input1==NULL || input2==NULL )
	{
		puts("Unable to allocate buffer! Oh no!");
		exit(1);
	}
    puts("Type something long and boring:");
	fgets(input1,1024,stdin);
	size = strlen(input1);
	strncpy (temp2,temp1,size);


	puts("You wrote:");
	printf("\"%s\"\n",input2);

	return(0);
}

