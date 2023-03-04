#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	float k, h, imc;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite seu Peso: ");
	scanf("%f", &k);
	printf("Digite sua Altura: ");
	scanf("%f", &h);
	
	imc=k/(h*h);
	
	if (imc<20)
	{
		printf("Abaixo de Peso");
	}
	else if (imc>=20&&imc<=25)
	{
		printf("Normal");
	}
	else if (imc<30)
	{
		printf("Excesso de Peso");
	}
	else if (imc<35)
	{
		printf("Obesidade");
	}
	else
	{
		printf("Obesidade Mórbida");
	}
	
	system ("pause");
}

