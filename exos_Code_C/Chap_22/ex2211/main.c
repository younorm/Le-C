#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char filename[255];
    FILE *dumpme;
    int x,c;

    /* Verifie les arguments de ligne de commandes */
    if(argc<2)
    {
        /* invit user */
        printf("File to dump: ");
        scanf("%s",filename);
    }
    else
    {
        /* copier l'argument dans le nom de fichier */
        strcpy(filename,argv[1]);
    }

    /* open the file */
    dumpme=fopen(filename,"r");
    if(!dumpme)
    {
        printf("Unable to open '%s'\n",filename);
        exit(1);
    }

    /* dump the data */
    x=0;
    while( !feof(dumpme) )
    {
        c=fgetc(dumpme);
        if( c==EOF )
            break;
        printf("%02X ",c);
        x++;
        if(!(x%16))
            putchar('\n');
    }
    putchar('\n');
    fclose(dumpme);

    return(0);
}
