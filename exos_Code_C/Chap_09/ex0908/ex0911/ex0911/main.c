#include <stdio.h>

int main()
{
	int alpha,code,code2;

	for(alpha='A';alpha<='Z';alpha=alpha+1)
	{
		for(code='A';code<='Z';code=code+1)
		{
		    for(code2='A';code2<='Z';code2=code2+1)
            {
            printf("%c%c%c\n",alpha,code,code2);
            }

		}

	}
	return(0);
}
