#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	int a, b;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um N�mero: ");
	scanf("%d", &a);
	printf("Digite outro N�mero: ");
	scanf("%d", &b);
	
	if (a>b)
	{
		printf("O Primeiro N�mero � Maior");
	}
	else 
	{
		printf("O Segundo N�mero � Maior \n\n");
	}
	
	system ("pause");
}
