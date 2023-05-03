#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fh;
    char buffer[128];
	char *r;

    fh=fopen("hello.txt","r");
    if(fh==NULL)
    {
        puts("Can't open that file!");
        exit(1);
    }
    while( !feof(fh) )
	{
		/* fgets returns (char *)NULL on
		   error or EOF */
		r = fgets(buffer,128,fh);
		if( r==NULL )
			break;
        printf("%s",buffer);
	}
    fclose(fh);
    return(0);
}

