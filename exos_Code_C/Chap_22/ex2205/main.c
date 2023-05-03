#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fh;

	/* "a" == append */
    fh=fopen("hello.txt","a");
    if(fh==NULL)
    {
        puts("Can't open that file!");
        exit(1);
    }
    fprintf(fh,"This text was added later\n");
	puts("Text appended");
    fclose(fh);
    return(0);
}
