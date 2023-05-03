#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float *celcius(float *temp);
float *fahreneit(float *temp);
int main()
{
	float *temp;
    char *typetemp;
	/* allocate memory */
	typetemp = ( char *)malloc(sizeof(char)*1);
	if(typetemp == NULL)
	{
		puts("Unable to allocate memory");
		exit(1);
	}

	temp = ( float *)malloc(sizeof(float)*1);
	if(temp == NULL)
	{
		puts("Unable to allocate memory");
		exit(1);
	}
    printf ("Rentrez une temperature a convertir en kelvin : ");
	scanf("%f", temp);

	printf("avez vous renseigne en celcius ou en fahreneit ? c ou f");
	scanf("%c",typetemp);
	if (typetemp == 'c')
        celcius(temp);
        else if (typetemp == 'f')
            fahreneit(temp);
            else
                printf("il faut c ou f");

	return(0);
}

float *celcius(float *temp)
{
    float kelvin;
  kelvin = (*temp + (float)273.5);
  printf("La temperature Celcius %f en kelvin est : %f",temp,kelvin);
}

float *fahreneit(float *temp)
{
    float kelvin;
  kelvin = ((*temp + 459.67) * (5.0/9.0));
  printf("La temperature Celcius %f en kelvin est : %f",temp,kelvin);
}
