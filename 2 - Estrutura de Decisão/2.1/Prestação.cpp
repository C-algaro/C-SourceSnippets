#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	float a,b;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite seu sal�rio: ");
	scanf("%f", &a);
	printf("Valor da presta��o: ");
	scanf("%f", &b);
	
	if (b<=a*0.3)
	{
		printf("Concedido");
	}
	else
	{
		printf("N�o Concedido");
	}
}
