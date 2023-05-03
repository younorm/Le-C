#include <stdio.h>

int main()
{
    int first,second,third;

    printf("Input the first value: ");
    scanf("%d",&first);
    printf("Input the second value: ");
    scanf("%d",&second);
    printf("Input the third value: ");
    scanf("%d",&third);

    puts("Evaluating...");
    if(first<second)
    {
        printf("%d is less than %d\n",first,second);
    }
    else if(first>second)
    {
        printf("%d is greater than %d\n",first,second);
    }
    else if(third==5)
    {
        printf("%d \?: you win a baloon !!!! %d\n",third);
    }
    return(0);
}
