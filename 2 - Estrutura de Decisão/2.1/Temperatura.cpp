#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	float t;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Temperatura: ");
	scanf("%f", &t);
	
	if (t<=15)
	{
		printf("Muito Frio \n\n");
	}
	else if (t<=23)
	{
		printf("Frio \n\n");
	}
	else if (t<=26)
	{
	    printf("Agradável \n\n");
    }
    else if (t<=30)
    {
    	printf("Calor \n\n");
	}
	else 
	{
		printf("Muuito Quente \n\n");
	}

	system("pause");
}
