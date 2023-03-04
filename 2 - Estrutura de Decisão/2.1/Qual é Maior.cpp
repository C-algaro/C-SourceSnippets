#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	int a, b;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um Número: ");
	scanf("%d", &a);
	printf("Digite outro Número: ");
	scanf("%d", &b);
	
	if (a>b)
	{
		printf("O Primeiro Número é Maior");
	}
	else 
	{
		printf("O Segundo Número é Maior \n\n");
	}
	
	system ("pause");
}
