#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	char *input1, *input2;
    int size,i;
    i=0;
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

	while ( i<=size )
    {
        switch(*(input1+i))
        {
            case 'a':
            *(input1+i)='@';
            case 'e':
                *(input1+i)='@';
                case 'i':
                *(input1+i)='@';
                case 'o':
                *(input1+i)='@';
                case 'u':
                *(input1+i)='@';
                case 'y':
                *(input1+i)='@';
                default:
                i++;
        }
    }
	strncpy (input2,input1,size);


	puts("You wrote:");
	printf("\"%s\"\n",input2);

	return(0);
}
