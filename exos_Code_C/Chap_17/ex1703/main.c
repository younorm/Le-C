#include <stdio.h>
#define set 223
char *binbin(int n);

int main()
{

     int bor,result;

    printf("Type a value from 0 to 255: ");
    scanf("%u",&bor);
    result = bor | set;

    printf("\t%s\t%d\n",binbin(bor),bor);

    printf("|\t%s\t%d\n",binbin(set),set);

    printf("=\t%s\t%d\n",binbin(result),result);

    return(0);
}

char *binbin(int n)
{
    static char bin[9];
    int x;

    for(x=0;x<8;x++)
    {
        bin[x] = n & 0x80 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return(bin);
}
