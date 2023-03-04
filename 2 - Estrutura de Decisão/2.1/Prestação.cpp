#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	float a,b;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite seu salário: ");
	scanf("%f", &a);
	printf("Valor da prestação: ");
	scanf("%f", &b);
	
	if (b<=a*0.3)
	{
		printf("Concedido");
	}
	else
	{
		printf("Não Concedido");
	}
}
