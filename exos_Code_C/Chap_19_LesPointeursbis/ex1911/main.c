#include <stdio.h>

int main()
{

    float temps[5] = { 18.7, 22.8, 25.0, 23.3, 23.2 };

    printf("mardi il fera %.1f\n",*(temps+1));

    printf("vendredi il fera %.1f\n",*(temps+4));

    return(0);
}

