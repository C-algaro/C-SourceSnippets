#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	int a, b, c;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um N�mero: ");
	scanf("%d", &a);
	printf("Digite um N�mero: ");
	scanf("%d", &b);
	printf("Digite um N�mero: ");
	scanf("%d", &c);
	
	if ((a>b)&&a>c)
	{
		printf("\n\nPrimeiro N�mero � Maior");
	}
	else if (b>c)
	{
		printf("\n\nSegundo Valor � Maior");
	}
	else 
	{
		printf("\n\nTerceiro Valor � Maior");
	}
	
	if ((a<b)&&a<c)
	{
		printf("\n\nPrimeiro Valor � o Menor\n\n");
	}
	else if (b<c)
	{
		printf("\n\nSegundo Valor � o Menor\n\n");
	}
	else
	{
		printf("\n\nTerceiro Valor � o Menor\n\n");
	}
	
	system ("pause");
}

