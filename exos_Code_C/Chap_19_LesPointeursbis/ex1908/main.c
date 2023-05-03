#include <stdio.h>

int main()
{
    char alpha[26];
    int x;
    char *pa;

    pa = alpha;       /* initialize pointer */

    /* Fill array */
    for(x=0;x<26;x++)
    {
        *pa++=x+'A';

    }

    pa = alpha;        /* re-initialize pointer */

    /* Display array */
    for(x=0;x<26;x++)
    {
        putchar(*pa);

        pa++;
    }

    return(0);
}
