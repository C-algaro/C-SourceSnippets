#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	int a, b, c;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um Número: ");
	scanf("%d", &a);
	printf("Digite um Número: ");
	scanf("%d", &b);
	printf("Digite um Número: ");
	scanf("%d", &c);
	
	if ((a>b)&&a>c)
	{
		printf("\n\nPrimeiro Número é Maior");
	}
	else if (b>c)
	{
		printf("\n\nSegundo Valor é Maior");
	}
	else 
	{
		printf("\n\nTerceiro Valor é Maior");
	}
	
	if ((a<b)&&a<c)
	{
		printf("\n\nPrimeiro Valor é o Menor\n\n");
	}
	else if (b<c)
	{
		printf("\n\nSegundo Valor é o Menor\n\n");
	}
	else
	{
		printf("\n\nTerceiro Valor é o Menor\n\n");
	}
	
	system ("pause");
}

