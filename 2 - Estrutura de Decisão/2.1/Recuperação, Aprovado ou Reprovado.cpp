#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	float a, b, c, d;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite Sua Primeira Nota: ");
	scanf("%f", &a);
	printf("Digite Sua Segunda Nota: ");
	scanf("%f", &b);
	printf("Digite Sua Terceira Nota: ");
	scanf("%f", &c);
	
	d=(a+b+c)/3;
	
	if (d>=7)
	{
		printf("Aprovado");
	}
	else if (d<=5)
	{
		printf("Reprovado");
	}
	else 
	{
		printf("Recuperação");
	}
}

