#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *input1, *input2, *i1, *i2;
    int i=0;

	/* allocate memory */
	input1 = (char *)malloc(sizeof(char)*1024);
	if(input1==NULL)
	{
		puts("Unable to allocate buffer! Oh no!");
		exit(1);
	}
	input2 = (char *)malloc(sizeof(char)*1024);
	if(input2==NULL)
	{
		puts("Unable to allocate buffer! Oh no!");
		exit(1);
	}

	/* use the memory */
	puts("Type something long and boring:");
	fgets(input1,1024,stdin);
    i1 =input1;
    i2 =input2;
	while (*i1 !='\n')
    {
      *i2=*i1;
      i1++;
      i2++;
    }
    *i2 ='\0';
	puts("You wrote:");
	printf("\"%s\"\n",input2);

	return(0);
}
